/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 11:48:23 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/12 11:16:29 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_stack **a, t_stack **b, t_bench *bench)
{
	int	size;

	size = stack_size(*a);
	if (stack_is_sorted(*a))
		return ;
	if (size <= 5)
		simple_sort(a, b, bench);
	else if (size <= 100)
		chunk_sort(a, b, bench);
	else
		chunk_sort(a, b, bench);
}
