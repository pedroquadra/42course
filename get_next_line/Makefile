# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pedanton <pedanton@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/11 20:18:35 by pedanton          #+#    #+#              #
#    Updated: 2023/08/11 20:41:38 by pedanton         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line.a

CC = cc

FLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=100

HEADER = /

SRC =	get_next_line.c \
		get_next_line_utils.c \

OBJECTS = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJECTS)

%.o: %.c $(HEADER)
		$(CC) $(FLAGS) -c $< -I $(HEADER) -o $@
		ar -rsc $(NAME) $@
clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)

re: fclean all