/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:55:51 by mosakura          #+#    #+#             */
/*   Updated: 2025/11/03 16:30:21 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static long	getformattype(char c, va_list list)
{
	if (c == 'c')
		return (print_char(list));
	else if (c == 's')
		return (print_str(list));
	else if (c == 'p')
		return (print_voidp(list));
	else if (c == 'd' || c == 'i')
		return (print_int(list));
	else if (c == 'u')
		return (print_uint(list));
	else if (c == 'x')
		return (print_hex(list, 0));
	else if (c == 'X')
		return (print_hex(list, 1));
	else if (c == '%')
	{
		ft_putchar('%');
		return (1);
	}
	else
		return (0);
}

char	formatchar(char *str, size_t count)
{
	size_t	i;

	i = 0;
	while (count > 0)
	{
		if (str[i] == '%')
			count--;
		i++;
	}
	return (str[i]);
}

long	printformat(char c, va_list list)
{
	long	len;
	size_t	i;

	len = getformattype(c, list);

	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	size_t	i;
	long	total_len;

	i = 0;
	va_start(list, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i]);
			total_len++;
			i++;
		}
		else
		{
			total_len += printformat(str[i + 1], list);
			i += 2;
		}
	}
	return ((int)total_len);
}
