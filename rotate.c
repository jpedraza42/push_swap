/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 11:02:36 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/29 12:33:05 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_stack(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = stack_last(*stack);
	*stack = first->next;
	first->next = NULL;
	last->next = first;
}

void	ra(t_stack **a, t_bench *bench)
{
	rotate_stack(a);
	bench_count(bench, "ra");
	print_ops("ra", bench);
}

void	rb(t_stack **b, t_bench *bench)
{
	rotate_stack(b);
	bench_count(bench, "rb");
	print_ops("rb", bench);
}

void	rr(t_stack **a, t_stack **b, t_bench *bench)
{
	rotate_stack(a);
	rotate_stack(b);
	bench_count(bench, "rr");
	print_ops("rr", bench);
}
