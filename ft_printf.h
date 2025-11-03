/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:09:16 by mosakura          #+#    #+#             */
/*   Updated: 2025/11/03 16:30:26 by mosakura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	char_to_hex(unsigned long long n, int x);
int		ft_printf(const char *str, ...);
char	*ft_itoa(int n);
long	print_uint(va_list list);
long	print_char(va_list list);
long	print_int(va_list list);
long	print_str(va_list list);
long	print_voidp(va_list list);
long	print_hex(va_list list, int x);

#endif
