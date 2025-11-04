/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvrm <mvrm@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:20:38 by mosakura          #+#    #+#             */
/*   Updated: 2025/11/04 16:59:43 by mvrm             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long	print_char(va_list list)
{
	char	c;

	c = va_arg(list, char);
	ft_putchar(c);
	return (1);
}

long	print_int(va_list list)
{
	long	n;
	char	*str_nbr;
	long	len;

	n = va_arg(list, int);
	str_nbr = ft_itoa(n);
	len = 
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
