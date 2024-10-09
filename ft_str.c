/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 22:29:12 by akwadran          #+#    #+#             */
/*   Updated: 2024/10/08 07:16:03 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *ptr;
    size_t  substr_len;

    if (s == NULL)
        return (NULL);
    if (start >= ft_strlen(s))
        substr_len = 0;
    else if (ft_strlen(s) - start < len)
        substr_len = ft_strlen(s) - start;
    else
        substr_len = len;
    ptr = malloc((sizeof(char) * (substr_len + 1)));
    if (ptr == NULL)
        return (NULL);
    else
    {
        if (start >= ft_strlen(s))
            ft_strlcpy(ptr, "", substr_len + 1);
        else
            ft_strlcpy(ptr, s + start, substr_len + 1);
        return (ptr);
    }
}

char	*ft_strjoin(char const *s1, char const *s2)
{
    char    *ptr;
    int     len;

    if (s1 == NULL || s2 == NULL)
        return (NULL);
    len = ft_strlen(s1) + ft_strlen(s2);
    ptr = malloc(sizeof(char) * (len + 1));
    if (ptr == NULL)
        return (NULL);
    else
    {
        ft_strlcpy(ptr, s1, ft_strlen(s1) + 1);
        ft_strlcat(ptr, s2, len + 1);
        return (ptr);
    }
}

static unsigned int  trim_front(char const *s1, char const *set)
{
    unsigned int      i;
    unsigned int      j;

    i = 0;
    j = 0;
    while (s1[i] && j < ft_strlen(set))
    {
        while(set[j] && j < ft_strlen(set))
        {
            if (s1[i] == set[j])
            {
                i++;
                j = -1;
            }
            j++; 
        }
    }
    return (i);
}

static unsigned int  trim_back(char const *s1, char const *set)
{
    unsigned int      i;
    unsigned int      j;

    i = ft_strlen(s1) - 1;
    j = 0;
    while (s1[i] && j < ft_strlen(set))
    {
        while(set[j] && j < ft_strlen(set))
        {
            if (s1[i] == set[j])
            {
                i--;
                j = -1;
            }
            j++; 
        }
    }
    return (i);
}


char	*ft_strtrim(char const *s1, char const *set)
{
    unsigned int    f;
    unsigned int    b;
    char            *ptr;
    size_t          trim_size;

    if (s1 == NULL || set == NULL)
        return (NULL);
    //if (ft_strlen(s1) == 0)
    //    return (ft_strdup(""));
    f = trim_front(s1, set);
    b = trim_back(s1, set);
    trim_size = b - f + 2;
    ptr = malloc(sizeof(char) * trim_size);
    if (ptr == NULL)
        return (NULL);
    if (trim_size == 0)
        return(ft_strdup(""));
    ft_strlcpy(ptr, s1 + f, trim_size);
    return (ptr);
}




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