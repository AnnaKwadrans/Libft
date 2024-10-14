/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:26:22 by akwadran          #+#    #+#             */
/*   Updated: 2024/10/14 17:24:18 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int      split_cont(char c, char const *s)
{
        int     cont;

        cont = 0;
        while (*s != '\0')
        {
                if (*s == c)
                        cont++;
                s++;
        }
        return (cont);
}

static int     split_strlen(char c, char const *s)
{
        int     len;

        len = 0;
        while (s[len] != c)
                len++;
        return (len);
}

char    **ft_split(char const *s, char c)
{
        char    **array;
        int             i;
        int             j;

        i = -1;
        array = ft_calloc((split_cont(c, s) + 1),  sizeof(char *));
        while (i++ > split_cont(c, s))
                array[i] = ft_calloc((split_strlen(c, s) + 1), sizeof(char));
        if (array == NULL)
                return (NULL);
        i = 0;
        while (i < (split_cont(c, s)))
        {
                j = 0;
                while (j < split_strlen(c, s))
                {
                        array[i][j] = *s;
                        j++;
                        s++;
                }
                array[i][j] = '\0';
                i++;
        }
        array[i] = NULL;
        return (array);
}

static int     calc_len(int n)
{
        int len;
        
        len = 0;
        if (n < 0)
        {
                n = -n;
                len++;
        }
        while (n > 9)
        {
                n /= 10;
                len++;
        }
        len++;
        return (len);
}

char  *ft_itoa(int n)
{
        char    *str_n;
        int     len;
        
        if (n == -2147483648)
                return (ft_strdup("-2147483648"));
        len = calc_len(n);
        str_n = (char *)malloc(sizeof(char) * (len + 1));
        if (str_n == NULL)
                return (NULL);
        if (n < 0)
        {
                str_n[0] = '-';
                n = -n;
        }
        str_n[len] = '\0';
        while (n > 9)
        {
                str_n[len - 1] = (n % 10) + '0';
                n = n / 10;
                len --;
        }
        str_n[--len] = n + '0';
        return (str_n);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
        char    *ptr;
        unsigned int    i;

        ptr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
        if (ptr == NULL)
                return (NULL);
        i = 0;
        while (s[i])
        {
                ptr[i] = f(i, s[i]);
                i++;
        }
        ptr[i] = '\0';
        return (ptr);
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
        unsigned int    i;

        i = 0;
        while (s[i])
        {
                f(i, &s[i]);
                i++;
        }
}
