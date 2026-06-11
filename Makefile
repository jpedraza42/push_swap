# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/02 13:22:47 by jpedraza          #+#    #+#              #
#    Updated: 2026/06/11 10:43:13 by jpedraza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC = main.c \
	stack_init.c \
	stack_utils.c \
	stack_search.c \
	stack_position.c \
	index.c \
	swap.c \
	push.c \
	rotate.c \
	reverse_rotate.c \
	parse_args.c \
	parse_utils.c \
	parse_error.c \
	radix_utils.c \
	complex_sort.c \
	sort.c \
	chunk_utils.c \
	medium_sort.c \
	simple_sort.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re