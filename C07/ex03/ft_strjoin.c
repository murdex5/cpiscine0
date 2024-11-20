/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:26:09 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/20 15:44:54 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	n;

}

int main() {
    // Test Case 1: Normal case with multiple strings
    char *strs1[] = {"Hello", "World", "C", "Programming"};
    char *sep1 = ", ";
    char *result1 = ft_strjoin(4, strs1, sep1);
    printf("Test Case 1 (Multiple Strings):\n");
    printf("Expected: Hello, World, C, Programming\n");
    printf("Result:   %s\n\n", result1);
    free(result1);

    // Test Case 2: Empty array
    char **strs2 = NULL;
    char *sep2 = " ";
    char *result2 = ft_strjoin(0, strs2, sep2);
    printf("Test Case 2 (Empty Array):\n");
    printf("Expected: (empty string)\n");
    printf("Result:   '%s'\n\n", result2 ? result2 : "(null)");
    free(result2);

    // Test Case 3: Single string
    char *strs3[] = {"Lone String"};
    char *sep3 = "---";
    char *result3 = ft_strjoin(1, strs3, sep3);
    printf("Test Case 3 (Single String):\n");
    printf("Expected: Lone String\n");
    printf("Result:   %s\n\n", result3);
    free(result3);

    // Test Case 4: Separator with multiple characters
    char *strs4[] = {"Apple", "Banana", "Cherry"};
    char *sep4 = " && ";
    char *result4 = ft_strjoin(3, strs4, sep4);
    printf("Test Case 4 (Long Separator):\n");
    printf("Expected: Apple && Banana && Cherry\n");
    printf("Result:   %s\n\n", result4);
    free(result4);

    // Test Case 5: Empty strings in array
    char *strs5[] = {"", "Non-Empty", "", "Another"};
    char *sep5 = "|";
    char *result5 = ft_strjoin(4, strs5, sep5);
    printf("Test Case 5 (Empty Strings):\n");
    printf("Expected: |Non-Empty||Another\n");
    printf("Result:   %s\n\n", result5);
    free(result5);

    return 0;
}

