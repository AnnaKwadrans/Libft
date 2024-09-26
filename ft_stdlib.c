/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:32:15 by akwadran          #+#    #+#             */
/*   Updated: 2024/09/26 23:57:21 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;
	
	num = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		if (ft_isdigit(*(nptr + 1)))
			num = (num + *nptr - '0') * 10;
		else
			num = num + *nptr - '0';
		nptr++;
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