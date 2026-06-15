/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 19:55:25 by jpedraza          #+#    #+#             */
/*   Updated: 2026/06/12 20:11:28 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "get_next_line/get_next_line_bonus.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		start;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	start = 1;
	if (!argv[start])
		error_exit();
	parse_args_bonus(&a, argv);
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
