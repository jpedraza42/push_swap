/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 12:30:11 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/11 10:17:13 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_chunks(t_stack **a, t_stack **b, int chunk_size)
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
			pb(a, b);
			if (*b && (*b)->index < limit - (chunk_size / 2))
				rb(b);
		}
		else if (is_top_half(*a, target))
			ra(a);
		else
			rra(a);
	}
}


static void	restore_chunks(t_stack **a, t_stack **b)
{
	while (*b)
	{
		bring_max_to_top(b);
		pa(a, b);
	}
}

void	chunk_sort(t_stack **a, t_stack **b)
{
	int	chunk_size;

	chunk_size = get_chunk_size(stack_size(*a));
	push_chunks(a, b, chunk_size);
	restore_chunks(a, b);
}
