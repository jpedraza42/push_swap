/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:26:23 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/27 14:16:19 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i] || s1[i] == '\0')
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "Camionero";
	char	s2[] = "Camion";
	size_t	n = 8;

	printf ("FT_STRNCMP: %d\n", ft_strncmp (s1, s2, n));
	printf ("   STRNCMP: %d\n", strncmp (s1, s2, n));
	return (0);
}
*/