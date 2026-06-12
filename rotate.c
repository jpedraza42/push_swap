/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 11:02:36 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/12 18:43:16 by jpedraza         ###   ########.fr       */
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
	ft_printf("ra\n");
}

void	rb(t_stack **b, t_bench *bench)
{
	rotate_stack(b);
	bench_count(bench, "rb");
	ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b, t_bench *bench)
{
	rotate_stack(a);
	rotate_stack(b);
	bench_count(bench, "rr");
	ft_printf("rr\n");
}
