/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:56:56 by mosakura          #+#    #+#             */
/*   Updated: 2025/11/03 16:30:40 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long	print_uint(va_list list)
{
	char	*nbr;

	nbr = ft_itoa((unsigned int)(va_arg(list, int)));
	ft_putstr(nbr);
}
