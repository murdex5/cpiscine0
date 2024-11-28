/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:26:09 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/25 16:09:21 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	if (str == NULL)
		return (0);
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strdup(char *str)
{
	int		len;
	char	*temp;

	if (str == NULL)
		return (NULL);
	len = ft_strlen(str);
	temp = (char *)malloc(len * sizeof(char));
	len = 0;
	while (str[len] != '\0')
	{
		temp[len] = str[len];
		len++;
	}
	temp[len] = '\0';
	return (temp);
}

char	*ft_mem_alloc(int size, char **strs, char *sep, char *str)
{
	int	n;
	int	total_len;
	int	sep_len;

	n = 0;
	total_len = 0;
	sep_len = ft_strlen(sep);
	while (n < size)
	{
		total_len += ft_strlen(strs[n]);
		if (n < size - 1)
			total_len += sep_len;
		n++;
	}
	str = (char *)malloc(total_len + 1);
	if (!str)
		return (NULL);
	return (str);
}

void	join_str(int size, char **strs, char *str, char *sep)
{
	int	n;
	int	i;
	int	k;

	n = 0;
	k = 0;
	while (n < size)
	{
		i = 0;
		while (strs[n][i] != '\0')
			str[k++] = strs[n][i++];
		if (n < size - 1)
		{
			i = 0;
			while (sep[i])
				str[k++] = sep[i++];
		}
		n++;
	}
	str[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*temp;

	if (size == 0)
		return (ft_strdup(""));
	temp = NULL;
	str = ft_mem_alloc(size, strs, sep, temp);
	join_str(size, strs, str, sep);
	return (str);
}
/*
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
*/
