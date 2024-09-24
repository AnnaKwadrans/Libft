/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:32:15 by akwadran          #+#    #+#             */
/*   Updated: 2024/09/24 18:14:36 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	whitespace_sign(const char *nptr, int *sign)
{
	int i;
	
	i = 0;
	while (ft_isspace(nptr[i]))
	{
		if (!(ft_isspace(nptr[i + 1]) || ft_isdigit(nptr[i + 1])
				|| nptr[i + 1] == '+' || nptr[i +1] == '-'))
			return (-1);
		i++;
	}
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (!(ft_isdigit(nptr[i + 1])))
			return (0);
		if (nptr[i] == '-')
			*sign = -1;
		i++;
	}
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	i = whitespace_sign(nptr, &sign);
	if (i == -1)
		return(0);
	while (ft_isdigit(nptr[i]))
	{
		if (!(ft_isdigit(nptr[i + 1])))
			num = num + nptr[i] - '0';
		else
			num = (num + nptr[i] - '0') * 10;
		i++;
	}
	return (num * sign);
}
/*
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	unsigned char	*ptr;
	
	i = 0;
	while (i < nmemb)
	{
		ptr = malloc(size);
		ptr = ptr + size;
	}
	if (ptr == NULL)
	{
		free(ptr);
		return (0);
	}
	return (ptr);
}
*/