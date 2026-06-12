/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 12:45:44 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/12 18:06:25 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	t_strategy	strategy;
	t_bench		bench;
	int			start;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	bench_init(&bench, has_bench(argv));
	strategy = get_strategy(argv);
	start = args_start(argv);
	if (!argv[start])
		error_exit();
	parse_args(&a, argv, start);
	assign_indexes(a);
	bench.disorder = disorder_ratio(a);
	execute_strategy(strategy, &a, &b, &bench);
	bench_print(&bench);
	stack_clear(&a);
	stack_clear(&b);
	return (0);
}
