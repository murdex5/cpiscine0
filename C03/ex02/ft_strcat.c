/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:57:18 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/14 16:11:58 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	if (src[0] == '\0')
	{
		return (dest);
	}
	while (src[i] != '\0')
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (dest);
}
/*
int main(void)
{
    // Test 1: Basic concatenation
    char dest1[50] = "Hello ";
    char src1[] = "World!";
    printf("Test 1 - Basic concatenation:\n");
    printf("Before: dest = \"%s\", src = \"%s\"\n", dest1, src1);
    ft_strcat(dest1, src1);
    printf("After:  dest = \"%s\"\n", dest1);
    printf("Expected result: \"Hello World!\"\n\n");

    // Test 2: Empty destination string
    char dest2[50] = "";
    char src2[] = "Test";
    printf("Test 2 - Empty destination:\n");
    printf("Before: dest = \"%s\", src = \"%s\"\n", dest2, src2);
    ft_strcat(dest2, src2);
    printf("After:  dest = \"%s\"\n", dest2);
    printf("Expected result: \"Test\"\n\n");

    // Test 3: Empty source string
    char dest3[50] = "Hello";
    char src3[] = "";
    printf("Test 3 - Empty source:\n");
    printf("Before: dest = \"%s\", src = \"%s\"\n", dest3, src3);
    ft_strcat(dest3, src3);
    printf("After:  dest = \"%s\"\n", dest3);
    printf("Expected result: \"Hello\"\n\n");

    // Test 4: Multiple concatenations
    char dest4[50] = "One";
    char src4_1[] = " Two";
    char src4_2[] = " Three";
    printf("Test 4 - Multiple concatenations:\n");
    printf("Before: dest = \"%s\"\n", dest4);
    ft_strcat(dest4, src4_1);
    ft_strcat(dest4, src4_2);
    printf("After:  dest = \"%s\"\n", dest4);
    printf("Expected result: \"One Two Three\"\n\n");

    // Test 5: Special characters
    char dest5[50] = "Hello\t";
    char src5[] = "World\n";
    printf("Test 5 - Special characters:\n");
    printf("Before: dest = \"%s\", src = \"%s\"\n", dest5, src5);
    ft_strcat(dest5, src5);
    printf("After:  dest = \"%s\"\n", dest5);
    printf("Expected result: \"Hello\\tWorld\\n\"\n\n");

    return (0);
}*/
