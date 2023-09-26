# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/26 10:33:41 by marvin            #+#    #+#              #
#    Updated: 2023/09/26 10:33:41 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

HEADER = /

SOURCE = ft_printf.c ft_printf_utils.c

OBJECTS = $(SOURCE:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJECTS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -I $(HEADER) -o $@
	ar -rsc $(NAME) $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean
	make all

.PHONY: all clean fclean re