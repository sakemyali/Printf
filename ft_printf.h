/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:09:16 by mosakura          #+#    #+#             */
/*   Updated: 2025/10/28 21:19:11 by mosakura         ###   ########.fr       */
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
int		ft_strlen(char *str);
void	ft_putnbr_base(int nbr, char *base);
int		ft_printf(const char *str, ...);
void	print_hex(int n);
char	*ft_itoa(int n);

#endif
