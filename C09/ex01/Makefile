# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychibani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/13 17:09:48 by ychibani          #+#    #+#              #
#    Updated: 2021/07/17 12:20:19 by ychibani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
CC = gcc -Wall -Werror -Wextra
NAME = libft.a
OBJ = $(SRC:.c=.o)
HEAD = includes/

all: $(NAME)

.c.o :
	$(CC) -I $(HEAD) -c $< -o ${<:.c=.o}

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
