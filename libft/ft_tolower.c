/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:59:40 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/27 19:09:35 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = (c + 32);
	return (c);
}
/*
int	main(void)
{
	int	c;

	c = 80;
	printf ("%d\n", ft_tolower (c));
	printf ("%d\n", tolower (c));
	return (0);
}
	*/