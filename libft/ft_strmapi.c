/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:21:26 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/28 10:24:16 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	lngs;
	unsigned int	i;
	char			*rtn;

	if (!s || !f)
		return (NULL);
	lngs = 0;
	i = 0;
	while (s[lngs] != '\0')
	{
		lngs++;
	}
	rtn = malloc (sizeof(char) * (lngs + 1));
	if (rtn == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		rtn[i] = f (i, s[i]);
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}
/*
char	ft_test(unsigned int i, char c)
{
	(void)i;
	return ((char)toupper(c));
}

int	main(void)
{
	char	*s;
	char	*result;

	s = "Esto es";
	result = ft_strmapi(s, ft_test);
	if (!result)
		return (1);
	printf("%s\n", result);
	free(result);
	return (0);
}
*/