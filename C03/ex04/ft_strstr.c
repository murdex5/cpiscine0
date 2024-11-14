/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:24:28 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/14 16:08:54 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>


char	ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*pattern;

	if(to_find[0] =='\0')
		return str;

	while (str)
	{
		start = str;
		pattern = to_find;

		while (str && pattern && str == pattern) 
		{
			str++;
			pattern++;
		}

		if (pattern == '\0')
			return start;
		str = start;

		str++;
	}

	return NULL;
}


int main() {
    // Test Case 1: Substring Found in the String
    char str1[] = "Hello, World!";
    char to_find1[] = "World";
    char *result1 = ft_strstr(str1, to_find1);
    printf("Test Case 1: %s\n", result1 ? result1 : "NULL");

    // Test Case 2: Substring at the Beginning of the String
    char str2[] = "Hello, World!";
    char to_find2[] = "Hello";
    char *result2 = ft_strstr(str2, to_find2);
    printf("Test Case 2: %s\n", result2 ? result2 : "NULL");

    // Test Case 3: Substring Not Found
    char str3[] = "Hello, World!";
    char to_find3[] = "Goodbye";
    char *result3 = ft_strstr(str3, to_find3);
    printf("Test Case 3: %s\n", result3 ? result3 : "NULL");

    char str13[] = "This is a very long string for testing purposes, and we want to find a substring.";
    char to_find13[] = "testing";
    char *result13 = ft_strstr(str13, to_find13);
    printf("Test Case 13: %s\n", result13 ? result13 : "NULL");


    return 0;
}
