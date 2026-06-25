/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 19:21:50 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/12 19:22:11 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "get_next_line/get_next_line.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		start;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	start = args_start(argv);
	if (!argv[start])
		error_exit();
	parse_args(&a, argv, start);
	assign_indexes(a);
	checker_read(&a, &b);
	if (stack_is_sorted(a) && !b)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	stack_clear(&a);
	stack_clear(&b);
	return (0);
}
