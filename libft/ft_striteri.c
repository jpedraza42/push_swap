/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:10:15 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/27 18:23:21 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f((unsigned int)i, &s[i]);
		i++;
	}
	return ;
}
/*
void	ft_test(unsigned int i, char *c)
{
	(void)i;
	*c = ((char)toupper((unsigned char)*c));
}

int	main(void)
{
	char	s[] = "Esto es";
	
	ft_striteri(s, ft_test);
	printf("%s\n", s);
	return (0);
}
*/