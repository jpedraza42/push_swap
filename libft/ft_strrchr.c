/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:05:26 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/27 13:50:16 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	crt;
	int				i;
	char			*ptr;

	crt = (unsigned char)c;
	i = 0;
	ptr = 0;
	while (1)
	{
		if (s[i] == crt)
			ptr = (char *)&s[i];
		if (s[i] == '\0')
			break ;
		i++;
	}
	return (ptr);
}
/*
int	main (void)
{
	char	s[] = "El perro de san roque";
	int		c = 'r';

	printf ("%s\n", ft_strrchr (s, c));
	printf ("%s\n", strrchr (s, c));
	return (0);
}
*/