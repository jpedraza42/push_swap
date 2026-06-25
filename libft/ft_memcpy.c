/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 10:32:04 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/30 19:10:49 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*src2;
	unsigned char		*dest2;

	if (!dest && !src)
		return (NULL);
	if (n == 0)
		return (dest);
	src2 = (const unsigned char *)src;
	dest2 = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}
/*
int	main(void)
{
	char	dest[] = "Esto es ";
	char	src[] = "una prueba.";
	size_t	n = 3;

	printf ("FT_MEMCPY: %s\n", (char *)ft_memcpy (dest, src, n));
	printf ("   MEMCPY: %s\n", (char *)memcpy (dest, src, n));
	return (0);
}
*/