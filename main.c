/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 12:45:44 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/10 12:52:52 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	(void)argc;
	a = NULL;
	b = NULL;
	parse_args(&a, argv);
	assign_indexes(a);
	radix_sort(&a, &b);
	stack_clear(&a);
	stack_clear(&b);
	return (0);
}
