/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 12:30:11 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/12 11:54:43 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_chunks(t_stack **a, t_stack **b, int chunk_size,
		t_bench *bench)
{
	t_stack	*target;
	int		limit;

	limit = chunk_size - 1;
	while (*a)
	{
		target = find_next_index_under(*a, limit);
		if (!target)
			limit += chunk_size;
		else if (*a == target)
		{
			pb(a, b, bench);
			if (*b && (*b)->index < limit - (chunk_size / 2))
				rb(b, bench);
		}
		else if (is_top_half(*a, target))
			ra(a, bench);
		else
			rra(a, bench);
	}
}

static void	restore_chunks(t_stack **a, t_stack **b,
		t_bench *bench)
{
	while (*b)
	{
		bring_max_to_top(b, bench);
		pa(a, b, bench);
	}
}

void	chunk_sort(t_stack **a, t_stack **b, t_bench *bench)
{
	int	chunk_size;

	chunk_size = get_chunk_size(stack_size(*a));
	push_chunks(a, b, chunk_size, bench);
	restore_chunks(a, b, bench);
}
