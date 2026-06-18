# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/02 13:22:47 by jpedraza          #+#    #+#              #
#    Updated: 2026/06/18 11:23:42 by jpedraza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
BONUS_NAME = checker

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
	parse_duplicates.c \
	radix_utils.c \
	complex_sort.c \
	sort.c \
	chunk_utils.c \
	medium_sort.c \
	simple_sort.c \
	strategy.c \
	strategy_exec.c \
	adaptive.c \
	bench.c \
	bench_print.c

COMMON_SRC = stack_init.c \
	stack_utils.c \
	stack_search.c \
	stack_position.c \
	index.c \
	parse_args_bonus.c\
	parse_utils.c \
	parse_error.c \
	parse_duplicates.c \
	bench.c \
	checker_exec_bonus.c \
	checker_read_bonus.c \
	checker_swap_bonus.c \
	checker_push_bonus.c \
	checker_rotate_bonus.c \
	checker_reverse_rotate_bonus.c \
	get_next_line/get_next_line_bonus.c \
	get_next_line/get_next_line_utils_bonus.c

BONUS_SRC = checker_bonus.c \
	$(COMMON_SRC)

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

bonus: $(BONUS_NAME)

$(BONUS_NAME): $(LIBFT) $(BONUS_OBJ)
	$(CC) $(CFLAGS) $(BONUS_OBJ) $(LIBFT) -o $(BONUS_NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(BONUS_OBJ)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME) $(BONUS_NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re bonus