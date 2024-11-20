/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:26:09 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/20 17:29:44 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	c;
	
	c = 0;
	if (!str == NULL)
		return (0);
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strdup(char *str)
{
	int	len;
	char	*temp;

	if (str == NULL)
		return (NULL);
	len = ft_strlen(str);
	temp = (char *)mallooc(len * sizeof(char));
	len = 0;
	while (str[len] != '\0')
	{
		temp[len] = str[len];
		len++;
	}
	temp[len] = '\0';
	return (temp);
}

int	ft_mem_alloc(int size, char **strs)
{
	int	i;
	int	n;
	int	len;

	n = 0;
	len = 0;
	while (n < size)
	{
		if (strs[n] != NULL)
		{
			i = 0;
			while (strs[n][i] != '\0')
			{
				len++;
				i++;
			}
		}
		n++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	total_len;
	int	sep_len;
	int	n;
	int	k;
	int	i;
i
	n = 0;
	totla_len = 0;
	sep_len = 0;
	if (size == 0)
	{
		return (ft_strdup("");
	}
	while (n < size)
	{
		total_len += ft_strlen(strs[n]);
		if (n < size - 1)
			total_len += sep_len;
		n++;
	}
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

