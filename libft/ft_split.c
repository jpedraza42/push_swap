/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 09:37:58 by jpedraza          #+#    #+#             */
/*   Updated: 2026/05/14 13:03:20 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_res(char **res, int j)
{
	while (j > 0)
		free(res[--j]);
	free(res);
	return (NULL);
}

static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	**ft_fill_split(char **res, char const *s, char c, size_t len)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	j = 0;
	k = 0;
	while (++i <= (int)len)
	{
		if ((s[i] == c || !s[i]) && i > k)
		{
			res[j] = ft_substr(s, k, i - k);
			if (!res[j])
				return (ft_free_res(res, j));
			j++;
			k = i + 1;
		}
		else
			if (s[i] == c)
				k = i + 1;
	}
	res[j] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	res = (char **)malloc((words + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	return (ft_fill_split(res, s, c, ft_strlen(s)));
}
/*
size_t	ft_strlen(const char *s)
{
	size_t i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	lng_s;

	if (!s)
		return (NULL);
	lng_s = ft_strlen(s);
	if (start >= lng_s)
		len = 0;
	if ((lng_s - start) < len)
		len = (lng_s - start);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len && (start + i) < lng_s)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
int	main (void)
{
	char const	s[] = "Esto-es---la-prueba-de-42";
	char		**result;
	char		c = '-';
	int			i;

	printf("Cadena original: %s\n", s);
	printf("Delimitador: '%c'\n", c);
	printf("--- Resultado ---\n");

	result = ft_split(s, c);
	if (!result)
		return (1);
	i = 0;
	while (result[i])
	{
		printf("Palabra [%d]: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/