# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mosakura <mosakura@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/24 23:09:13 by mosakura          #+#    #+#              #
#    Updated: 2025/10/25 00:03:54 by mosakura         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ft_printf.a

SRCS		= ft_printf.c \
			  ft_putnbr_base \
			  utils.c \
			  ./libft/*.c

OBJS		= $(SRCS:.c=.o)

CC			= cc

FLAGS		= -Wall -Werror -Wextra -I ./

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
