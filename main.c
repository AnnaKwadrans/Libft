/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:05:15 by akwadran          #+#    #+#             */
/*   Updated: 2024/09/23 23:37:50 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
/*
	// ft_type.c

	printf("isalpha: %d\n", isalpha('A'));
	printf("ft_isalpha: %d\n\n", ft_isalpha('A'));

	printf("isdigit: %d\n", isdigit('3'));
	printf("ft_isdigit: %d\n\n", ft_isdigit('3'));

	printf("isalnum: %d\n", isalnum('C'));
	printf("ft_isalnum: %d\n\n", ft_isalnum('C'));

	printf("isascii: %d\n", isascii(128));
	printf("ft_isascii: %d\n\n", ft_isascii(128));

	printf("isprint: %d\n", isprint(' '));
	printf("ft_isprint: %d\n\n", ft_isprint(' '));
*/
/*
	// ft_ctype2.c

	// toupper

	unsigned int i;
	char teststring[] = "holu HOLA holi 785*anna 500";
	i = 0;
	while (teststring[i])
	{
		teststring[i] = ft_toupper(teststring[i]);
		i++;
	}
	printf("%s", teststring);
	
	// tolower

	i = 0;
	while (teststring[i])
	{
		teststring[i] = ft_tolower(teststring[i]);
		i++;
	}
	printf("%s", teststring);

	//ft_string.c

	// strlen

    printf("strlen: %lu\n", strlen("hol0"));
	printf("ft_strlen: %zu\n\n", ft_strlen("hol0"));

	// memset
*/
/*
    char str[] = "hola mundo";
    memset(str, '8', 4);
    printf("memset: %s\n", str);

    int arr[10] = {0};
    memset(arr, 42, sizeof(int) * 10);
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

	char strmem[] = "hola mundo";
    	ft_memset(strmem, '8', 4);
    	printf("ft_memset: %s\n", strmem);



	int arrmem[10] = {0};
	ft_memset(arrmem, 42, sizeof(int) * 10);
	for (int i = 0; i < 10; i++) {
		printf("ft: %d ", arrmem[i]);
	}
	printf("\n");
*/
/*
	// memcpy

	char str1[] = "";
	char str2[] = "";
	char str3[] = "";

	memcpy(str2, str1, ft_strlen(str1));
	ft_memcpy(str3, str1, ft_strlen(str1));

	printf("memcpy: %s\n", str2);
	printf("ft_memcpy: %s\n", str3);
*/
/*
	// memmove

	char str1[] = "hola mundo";
	//char str2[] = "xxxxxxxxxx";
	//char str3[] = "xxxxxxxxxx";

	memmove(str1 + 5, str1, sizeof(char) * 5);
	ft_memmove(str1 + 5, str1, sizeof(char) * 5);

	printf("memmove: %s\n", str1);
	printf("ft_memmove: %s\n", str1);
*/


/*
	// ft_string2.c

	// strlcpy

	char str2[] = "xxxxxxxxxx";
	char str3[] = "xxxxxxxxxx";
	unsigned int j = 0;
	i = strlcpy(str2, str, 7);
	j = ft_strlcpy(str3, str, 7);
	printf("strlcpy: %s %d\nft_strlcpy: %s %d\n\n", str2, i, str3, j);
*/
/*
	// strlcat

	char string0[] = "add";
	//char string1[] = "original";
	char string2[] = "original";
	//unsigned int i;
	unsigned int j;

	//i = strlcat(string1, string0, sizeof(string1));
	j = ft_strlcat(string2, string0, sizeof(string2));

	printf("ft_strlcat: %s %d\n\n", string2, j);
*/
/*
	// strchr

	char test[] = "i co sie gapisz";
	char *result;

	result = strchr(test, 'e');
	printf("strchr: %s; adres returned: %p\n", result, &result);
	
	result = ft_strchr(test, 'e');
	printf("ft_strchr: %s; adres returned: %p\n", result, &result);

	// strrchr

	char test_rr[] = "e i co sie gapisz";
	char *result_rr1;
	char *result_rr2;

	result_rr1 = strrchr(test_rr, 'e');
	printf("strrchr: %s; adres returned: %p\n", result_rr1, &result_rr1);
	
	result_rr2 = ft_strrchr(test_rr, 'e');
	printf("ft_strrchr: %s; adres returned: %p\n", result_rr2, &result_rr2);
	
	// strncmp
	
	char strin1[] = "";
	char strin2[] = "";
	int i, j;

	i = strncmp(strin1, strin2, 4);
	j = ft_strncmp(strin1, strin2, 4);

	printf("strncmp: %d, ft_strncmp: %d", i, j);
*/
/*
	// memchr

	char str[] = "hola mundo";
	char *str2 = ft_memchr(str, 'u', 11);
	printf("%s\n", str2);

	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
    printf("%s\n", (char *)ft_memchr(tab, -1, 7));
*/
/*	
	// ft_string3.c

	char *ptr;
	ptr = ft_strdup(teststring);
	printf("%s\n", ptr);
	free(ptr);
*/

	// stdlib
/*
	// atoi

	char	numstr[] = "    \n\t\v\r    -+12345678tfgsla";
	int		i = 0;

	i = ft_atoi(numstr);
	printf("%d\n", i);
	i = ft_atoi("\e475");
	printf("%d\n", i);
*/

	// calloc

	

	return (0);
}
