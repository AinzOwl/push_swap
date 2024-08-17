# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efelaous <efelaous@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/17 06:08:53 by efelaous          #+#    #+#              #
#    Updated: 2024/08/17 08:49:40 by efelaous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
FLAGS = 
SRC = push_swap.c algorithm/mini_sorts.c functions/checker_utils.c functions/checkers.c functions/error.c functions/globals.c functions/splitter.c functions/utils.c \
		lists/lst_add.c lists/lst_delete.c lists/lst_new.c lists/lst_size.c operations/push.c operations/rotate.c operations/rrotate.c operations/swap.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAGS)  -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all