/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:28:32 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/14 13:42:50 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
		len++;
	while (i < nb && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
/*
int main(void)
{
    // Test 1: Append n characters to an empty destination string
    {
        char dest[20] = "";
        char src[] = "Hello, world!";
        unsigned int n = 5;

        char *result = ft_strncat(dest, src, n);
        printf("Test 1 - Append n characters to an empty destination:\n");
        printf("Destination: %s\nExpected: \"Hello\"\n\n", result);
    }

    // Test 2: Append n characters to a non-empty destination string
    {
        char dest[20] = "Foo ";
        char src[] = "Hello, world!";
        unsigned int n = 8;

        char *result = ft_strncat(dest, src, n);
        printf("Test 2 - Append n characters to a non-empty destination:\n");
        printf("Destination: %s\nExpected: \"Foo Hello\"\n\n", result);
    }

    // Test 3: Append the entire source string (n >= length of source)
    {
        char dest[20] = "Foo ";
        char src[] = "Hello";
        unsigned int n = 10;

        char *result = ft_strncat(dest, src, n);
        printf("Test 3 - Append the entire source string:\n");
        printf("Destination: %s\nExpected: \"Foo Hello\"\n\n", result);
    }

    // Test 4: Append an empty source string
    {
        char dest[20] = "Foo ";
        char src[] = "";
        unsigned int n = 5;

        char *result = ft_strncat(dest, src, n);
        printf("Test 4 - Append an empty source string:\n");
        printf("Destination: %s\nExpected: \"Foo \"\n\n", result);
    }

    return 0;
}*/
