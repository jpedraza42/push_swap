/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 13:57:05 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/18 14:29:37 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct t_stack
{
	int				value;
	int				index;
	struct t_stack	*next;
}	t_stack;

typedef enum e_strategy
{
	SIMPLE,
	MEDIUM,
	COMPLEX,
	ADAPTIVE
}	t_strategy;

typedef struct s_bench
{
	int		enabled;
	double	disorder;
	char	*strategy;
	char	*complexity;
	int		total;
	int		sa;
	int		sb;
	int		ss;
	int		pa;
	int		pb;
	int		ra;
	int		rb;
	int		rr;
	int		rra;
	int		rrb;
	int		rrr;
}	t_bench;

t_stack		*stack_new(int value);
t_stack		*stack_last(t_stack *stack);
void		stack_add_back(t_stack **stack, t_stack *new);
int			stack_size(t_stack *stack);
void		stack_clear(t_stack **stack);
int			stack_is_sorted(t_stack *stack);
void		init_stack(t_stack **a, char **argv);
void		sa(t_stack **a, t_bench *bench);
void		sb(t_stack **b, t_bench *bench);
void		ss(t_stack **a, t_stack **b, t_bench *bench);
void		pa(t_stack **a, t_stack **b, t_bench *bench);
void		pb(t_stack **a, t_stack **b, t_bench *bench);
void		ra(t_stack **a, t_bench *bench);
void		rb(t_stack **b, t_bench *bench);
void		rr(t_stack **a, t_stack **b, t_bench *bench);
void		rra(t_stack **a, t_bench *bench);
void		rrb(t_stack **b, t_bench *bench);
void		rrr(t_stack **a, t_stack **b, t_bench *bench);
int			stack_min(t_stack *stack);
int			stack_max(t_stack *stack);
t_stack		*stack_min_node(t_stack *stack);
t_stack		*stack_max_node(t_stack *stack);
int			is_number(char *str);
long		ft_atol(const char *nptr);
int			has_duplicates(t_stack *stack);
void		error_exit(void);
void		parse_args(t_stack **a, char **argv, int start);
int			stack_position(t_stack *stack, t_stack *target);
int			stack_min_position(t_stack *stack);
int			stack_max_position(t_stack *stack);
int			is_top_half(t_stack *stack, t_stack *node);
void		assign_indexes(t_stack *stack);
int			get_max_bits(t_stack *stack);
int			get_bit(int index, int bit);
void		radix_sort(t_stack **a, t_stack **b, t_bench *bench);
void		sort_stack(t_stack **a, t_stack **b, t_bench *bench);
int			has_index_under(t_stack *stack, int limit);
void		bring_max_to_top(t_stack **b, t_bench *bench);
void		chunk_sort(t_stack **a, t_stack **b, t_bench *bench);
t_stack		*stack_max_index_node(t_stack *stack);
int			get_chunk_size(int size);
t_stack		*find_next_index_under(t_stack *stack, int limit);
void		simple_sort(t_stack **a, t_stack **b, t_bench *bench);
int			is_strategy_arg(char *arg);
t_strategy	get_strategy(char **argv);
void		execute_strategy(t_strategy strategy, t_stack **a, t_stack **b,
				t_bench *bench);
double		disorder_ratio(t_stack *a);
void		adaptive_sort(t_stack **a, t_stack **b, t_bench *bench);
void		bench_init(t_bench *bench, int enabled);
int			is_bench_arg(char *arg);
int			args_start(char **argv);
int			has_bench(char **argv);
void		bench_count(t_bench *bench, char *op);
void		bench_print(t_bench *bench);
void		checker_read(t_stack **a, t_stack **b);
int			checker_exec(char *line, t_stack **a, t_stack **b);
void		sa_checker(t_stack **a);
void		sb_checker(t_stack **b);
void		ss_checker(t_stack **a, t_stack **b);
void		pa_checker(t_stack **a, t_stack **b);
void		pb_checker(t_stack **a, t_stack **b);
void		ra_checker(t_stack **a);
void		rb_checker(t_stack **b);
void		rr_checker(t_stack **a, t_stack **b);
void		rra_checker(t_stack **a);
void		rrb_checker(t_stack **b);
void		rrr_checker(t_stack **a, t_stack **b);
void		parse_args_bonus(t_stack **a, char **argv);
void		stack_print(t_stack *stack);

#endif
