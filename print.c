/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:20:38 by mosakura          #+#    #+#             */
/*   Updated: 2025/11/03 16:14:57 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long	print_char(va_list list)
{
	char	c;

	c = va_arg(list, char);
	ft_putchar(c);
}

long	print_int(va_list list)
{
	long	n;
	char	*str_nbr;

	n = va_arg(list, int);
	str_nbr = ft_itoa(n);
}

long	print_str(va_list list)
{
	char	*str;

	str = va_arg(list, char *);
	ft_putstr(str);
}

long	print_voidp(va_list list)
{
	char	*mem;

	mem = va_arg(list, void *);
	char_to_hex((unsigned long long)mem, 0);
}

long	print_hex(va_list list, int x)
{
	unsigned long long	nbr;

	nbr = (unsigned long long)(va_arg(list, int));
	char_to_hex(nbr, x);
}
