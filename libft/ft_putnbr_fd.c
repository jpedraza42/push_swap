/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedraza < jpedraza@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 11:27:44 by jpedraza          #+#    #+#             */
/*   Updated: 2026/04/29 12:21:28 by jpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	i;

	i = n;
	if (i < 0)
	{
		write(fd, "-", 1);
		i = -i;
	}
	if (i >= 10)
		ft_putnbr_fd(i / 10, fd);
	c = (i % 10) + '0';
	write (fd, &c, 1);
}
/*
int	main(void)
{
	int	n = -1506196842;
	int	fd = 1;

	ft_putnbr_fd(n, fd);
	return (0);
}
*/