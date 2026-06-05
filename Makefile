# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/02 13:22:47 by jpedraza          #+#    #+#              #
#    Updated: 2026/06/05 14:00:11 by jpedraza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
SRC = stack_init.c \
	  stack_utils.c \
	  swap.c \
	  push.c \
	  rotate.c \
	  reverse_rotate \
	  stack_search.c

OBJ = $(SRC:.c=.o)

INCLUDES = -I includes

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 
