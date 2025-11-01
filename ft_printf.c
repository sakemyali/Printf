/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:55:51 by mosakura          #+#    #+#             */
/*   Updated: 2025/10/28 21:16:09 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	getformattype(char c)
{
	if (c == 'c')
		return (1);
	else if (c == 's')
		return (2);
	else if (c == 'p')
		return (3);
	else if (c == 'd' || c == 'i')
		return (4);
	else if (c == 'u')
		return (5);
	else if (c == 'x')
		return (6);
	else if (c == 'X')
		return (7);
	else if (c == '%')
		return (8);
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
	return(str[i]);
}

size_t	printformat(int c, void *var, size_t idx)
{

	
	return (idx);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	size_t	i;

	i = 0;
	va_start(list, str);
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar(str[i]);
		else
			i = printformat(str[i + 1], va_arg(list, void *), i + 1);
		i++;
	}
}
