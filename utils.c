/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:09:09 by mosakura          #+#    #+#             */
/*   Updated: 2025/11/03 16:30:28 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(&str);
		str++;
	}
}

long	ft_strlen(char *str)
{
	long	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	char_to_hex(unsigned long long n, int x)
{
	char	*x_digits;
	char	*bigx_digits;

	x_digits = "0123456789abcdef";
	bigx_digits = "0123456789ABCDEF";

	if (n < 16)
		ft_putchar('0');
	if (n >= 16)
	{
		char_to_hex(n / 16, x);
		char_to_hex(n % 16, x);
	}
	else
	{
		if (x == 0)
			ft_putchar(x_digits[n]);
		else
			ft_putchar(bigx_digits[n]);
	}
}

char	*ft_strdup(const char *s)
{
	char		*dest;
	long		i;
	long		len;

	len = ft_strlen(s);
	dest = (char *) malloc((len + 1)*(sizeof(char)));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
