/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 22:29:12 by akwadran          #+#    #+#             */
/*   Updated: 2024/09/25 06:09:17 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *ptr;

    ptr = malloc((sizeof(char) * (len + 1)));
    if (ptr == NULL)
    {
        free(ptr);
        return (NULL);
    }
    else
    {
        ft_strlcpy(ptr, &s[start], len + 1);
        return (ptr);
    }
}

char	*ft_strjoin(char const *s1, char const *s2)
{
    char    *ptr;
    int     len;

    len = ft_strlen(s1) + ft_strlen(s2);
    ptr = malloc(sizeof(char) * (len + 1));
    if (ptr == NULL)
    {
        free(ptr);
        return (NULL);
    }
    else
    {
        ft_strlcpy(ptr, s1, ft_strlen(s1));
        ft_strlcat(ptr, s2, len + 1);
        return (ptr);
    }


}
*/
//char	*ft_strtrim(char const *s1, char const *set);
//char	**ft_split(char const *s, char c);
//char	*ft_itoa(int n);
/*
int main(void)
{
    char    string[] = "Hola Jola, czy wierzysz ze jeze tu sa?";
    char    *substring;

    substring = ft_substr(string, 11, ft_strlen(string) - 11 + 1);
    printf("%s\n", substring);
    free(substring);
    return (0);
}
*/