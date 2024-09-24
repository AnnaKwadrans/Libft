/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:56:26 by akwadran          #+#    #+#             */
/*   Updated: 2024/09/24 23:00:01 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> // quitar
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
/*
void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		if (n == -2147483648)
		{
			write(fd, "2", 1);
			n = -147483648;
		}
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd((n / 10), 1);
		ft_putchar_fd(((n % 10) + '0'), 1);
	}
	if (n < 10)
		ft_putchar_fd((n + '0'), 1);
}
*/

/*
int	main(void)
{
	//char	string[] = "hola mundo";

	//ft_putstr_fd(string, 1);
	//ft_putendl_fd(string, 1);
	//ft_putendl_fd("co tam mordo", 1);
	ft_putnbr_fd(-9876, 1);
	printf("\n");
	ft_putnbr_fd(0, 1);
		printf("\n");
	ft_putnbr_fd(-2147483648, 1);
		printf("\n");
	ft_putnbr_fd(2147483647, 1);
		printf("\n");
	ft_putnbr_fd(2147483648, 1);
		printf("\n");
	ft_putnbr_fd(-2147483649, 1);
		printf("\n");

	return (0);
}
*/