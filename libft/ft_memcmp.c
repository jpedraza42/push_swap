/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:46:10 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/27 14:29:28 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t						i;
	const unsigned char			*ptr1;
	const unsigned char			*ptr2;

	i = 0;
	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
/*
int	main (void)
{
	char	s1[] = "Camionero";
	char	s2[] = "Camion";
	size_t	n = 6;

	printf ("FT_MEMCMP: %d\n", ft_memcmp (s1, s2, n));
	printf ("   MEMCMP: %d\n", memcmp (s1, s2, n));
	return (0);
}
*/