/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:42:08 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/14 12:12:39 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main() {
    // Test Case 1: Compare two equal strings
    printf("[1] Compare two equal strings: ");
    printf("Expected: 0, Got: %d\n", ft_strcmp("hello", "hello"));

    // Test Case 2: Compare two different strings of equal length
    printf("[2] Compare two different strings of equal length: ");
    printf("Expected: 108, Got: %d\n", ft_strcmp("apple", "banana"));

    // Test Case 3: Compare two different strings of different length
    printf("[3] Compare two different strings of different length: ");
    printf("Expected: -49, Got: %d\n", ft_strcmp("cat", "caterpillar"));

    // Test Case 4: Compare two empty strings
    printf("[4] Compare two empty strings: ");
    printf("Expected: 0, Got: %d\n", ft_strcmp("", ""));

    // Test Case 5: Compare a string with an empty string
    printf("[5] Compare a string with an empty string: ");
    printf("Expected: 72, Got: %d\n", ft_strcmp("Hello", ""));
    return 0;
} */
