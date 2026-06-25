/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:47:35 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/27 19:08:16 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
int	main()
{
	int	c;

	c = 23;
	printf (("%d\n"), ft_isalnum (c));
	printf (("%d\n"), isalnum (c));
	return (0);
}
*/