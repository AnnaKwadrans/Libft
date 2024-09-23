/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:32:15 by akwadran          #+#    #+#             */
/*   Updated: 2024/09/23 23:32:25 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
	{
		if (!(nptr[i + 1] == ' ' || (nptr[i +1] >= '\t' && nptr[i + 1] <= '\r')
				|| ft_isdigit(nptr[i + 1]) || nptr[i + 1] == '+'
				|| nptr[i +1] == '-'))
			return (0);
		i++;
	}
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (!(ft_isdigit(nptr[i +1])))
			return (0);
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		if (!(ft_isdigit(nptr[i + 1])))
			num = num + nptr[i] - '0';
		else
			num = (num + nptr[i] - '0') * 10;
		i++;
	}
	num = num * sign;
	return (num);
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