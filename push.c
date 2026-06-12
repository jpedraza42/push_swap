/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 14:09:07 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/12 10:50:01 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_stack(t_stack **src, t_stack **dst)
{
	t_stack	*tmp;

	if (!src || !*src)
		return ;
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dst;
	*dst = tmp;
}

void	pa(t_stack **a, t_stack **b, t_bench *bench)
{
	push_stack(b, a);
	bench_count(bench, "pa");
	ft_printf("pa\n");
}

void	pb(t_stack **a, t_stack **b, t_bench *bench)
{
	push_stack(a, b);
	bench_count(bench, "pb");
	ft_printf("pb\n");
}
