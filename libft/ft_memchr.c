/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:42:04 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/27 14:07:17 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	crt;
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	crt = (unsigned char)c;
	while (i < n)
	{
		if (ptr[i] == crt)
			return ((void *)&ptr[i]);
		i++;
	}
	return (0);
}
/*
int	main (void)
{
	char	s[] = "Esto es la prueba";
	int		c = 'p';
	size_t	n = 12;

	printf ("con ft_menchr: %p\n", ft_memchr (s, c, n));
	printf ("con    menchr: %p\n", memchr (s, c, n));
	return (0);
}
*/