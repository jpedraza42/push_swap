/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:40:00 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/27 11:06:01 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	const char	*s;

	
	s = "Nadie evalua mejor que tu";
	printf	("%zu\n", ft_strlen (s));
	printf	("%zu\n", strlen (s));
	return (0);
}
*/