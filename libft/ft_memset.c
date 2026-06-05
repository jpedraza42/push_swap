/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:19:02 by jpedraza          #+#    #+#             */
/*   Updated: 2026/05/04 18:02:27 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char	s[] = "Esta es la prueba";
	int		c;
	size_t	n;

	c = 1;
	n = 5;
	printf ("%s\n", (char *)ft_memset(s, c, n));
	printf ("%s\n", (char *)memset(s, c, n));
	return (0);
}
*/