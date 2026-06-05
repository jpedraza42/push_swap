/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:21:11 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/27 13:39:54 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
	return ;
}
/*
int main (void)
{
	char	s1[] = "Esto es una prueba";
	char	s2[] = "Esto es una prueba";
	size_t	n = 5;

	printf("Antes de aplicar la función: %s\n", s1);
	ft_bzero(s1, n);
	printf("Después de aplicar ft_bzero: %s\n", s1);
	bzero(s2, n);
	printf("Después de aplicar bzero: %s\n", s2);
	return (0);
}
*/