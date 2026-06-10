/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 13:57:05 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/10 12:30:43 by jpedraza         ###   ########.fr       */
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

t_stack	*stack_new(int value);
t_stack	*stack_last(t_stack *stack);
void	stack_add_back(t_stack **stack, t_stack *new);
int		stack_size(t_stack *stack);
void	stack_clear(t_stack **stack);
int		stack_is_sorted(t_stack *stack);
void	init_stack(t_stack **a, char **argv);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
int		stack_min(t_stack *stack);
int		stack_max(t_stack *stack);
t_stack	*stack_min_node(t_stack *stack);
t_stack	*stack_max_node(t_stack *stack);
int		is_number(char *str);
long	ft_atol(const char *nptr);
int		has_duplicates(t_stack *stack);
void	error_exit(void);
void	parse_args(t_stack **a, char **argv);
void	error_exit(void);
int		stack_position(t_stack *stack, t_stack *target);
int		stack_min_position(t_stack *stack);
int		stack_max_position(t_stack *stack);
int		is_top_half(t_stack *stack, t_stack *node);
void	assign_indexes(t_stack *stack);
int		get_max_bits(t_stack *stack);
int		get_bit(int index, int bit);
void	radix_sort(t_stack **a, t_stack **b);
void	sort_stack(t_stack **a, t_stack **b);
int		has_index_under(t_stack *stack, int limit);
void	bring_max_to_top(t_stack **b);
void	chunk_sort(t_stack **a, t_stack **b);
void	stack_print(t_stack *stack);

#endif
