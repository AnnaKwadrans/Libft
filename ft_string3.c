/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 22:29:04 by akwadran          #+#    #+#             */
/*   Updated: 2024/09/23 23:38:50 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> //quitar
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	if (n == 0)
		return (0);
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		n--;
		ptr++;
	}
	return (0);
}

//int		ft_memcmp(const void *s1, const void *s2, size_t n);
//char	*ft_strnstr(const char *big, const char *little, size_t len);

char	*ft_strdup(const char *s)
{
	int		len;
	char	*ptr;

	len = ft_strlen(s) + 1;
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
	{
		free(ptr);
		return (ptr);
	}
	ft_strlcpy(ptr, s, sizeof(char) * len);
	return (ptr);
}
