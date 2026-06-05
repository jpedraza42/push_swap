/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 09:30:47 by jpedraza          #+#    #+#             */
/*   Updated: 2026/05/04 18:00:05 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	int		start;
	int		end;
	char	*ptr;
	int		i;

	if (!s || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] && ft_strchr(set, s[start]))
		start++;
	while (end > start && ft_strchr(set, s[end]))
		end--;
	ptr = (char *)malloc(end - start + 2);
	if (!ptr)
		return (NULL);
	i = 0;
	while (start <= end)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
/*
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	c2;

	c2 = (char) c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c2)
			return ((char *)&s[i]);
		i++;
	}
	if (c2 == '\0')
		return ((char *)&s[i]);
	return (0);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	int		i;
	char	c2;

	c2 = (char) c;
	s1 = (char *) s;
	i = ft_strlen(s1);
	while (i >= 0)
	{
		if (s1[i] == c2)
			return ((char *)&s1[i]);
		i--;
	}
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != 0)
		i++;
	return (i);
}

int	main(void)
{
	char const	s[] = "ababaabbaaMi nombre es: Juanbababbaaab";
	char const	set[] = "ab";

	printf("%s\n", ft_strtrim(s, set));
	return (0);
}
*/