/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:09:09 by mosakura          #+#    #+#             */
/*   Updated: 2025/10/28 19:52:52 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	print_hex(int n)
{
	if (n >= 16)
		print_hex(n / 16);
	n = n % 16;
	n += n < 10 ? '0' : 'a' - 10;
	write(1, &n, 1);
}
size_t	countarg(char *formatstr)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while(formatstr[i])
	{
		if (formatstr[i - 1] != '%' && formatstr[i] == '%')
			count++;
		i++;
	}
	return (count);
}
