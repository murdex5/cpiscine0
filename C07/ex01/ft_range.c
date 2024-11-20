/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:56:32 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/20 14:38:43 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*arr;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	arr = (int *)malloc(len * sizeof(int));
	if (!arr)
		return (NULL);
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/*
int main(void)
{
    // Test Case 1: Standard Range (min < max)
    printf("Test Case 1: Standard Range (min < max)\n");
    int *arr1 = ft_range(1, 5);
    if (arr1) {
        for (int i = 0; i < 4; i++) {
            printf("%d ", arr1[i]);
        }
        printf("\n");
        free(arr1);
    } else {
        printf("NULL\n");
    }

    // Test Case 2: Reverse Range (min >= max)
    printf("\nTest Case 2: Reverse Range (min >= max)\n");
    int *arr2 = ft_range(5, 1);
    if (arr2) {
        for (int i = 0; i < 0; i++) {
            printf("%d ", arr2[i]);
        }
        free(arr2);
    } else {
        printf("NULL\n");
    }

    // Test Case 3: Zero Range (min == max)
    printf("\nTest Case 3: Zero Range (min == max)\n");
    int *arr3 = ft_range(3, 3);
    if (arr3) {
        for (int i = 0; i < 0; i++) {
            printf("%d ", arr3[i]);
        }
        free(arr3);
    } else {
        printf("NULL\n");
    }

    // Test Case 4: Negative to Positive Range
    printf("\nTest Case 4: Negative to Positive Range\n");
    int *arr4 = ft_range(-3, 3);
    if (arr4) {
        for (int i = 0; i < 6; i++) {
            printf("%d ", arr4[i]);
        }
        printf("\n");
        free(arr4);
    } else {
        printf("NULL\n");
    }

    // Test Case 5: Large Range
    printf("\nTest Case 5: Large Range\n");
    int *arr5 = ft_range(100, 110);
    if (arr5) {
        for (int i = 0; i < 10; i++) {
            printf("%d ", arr5[i]);
        }
        printf("\n");
        free(arr5);
    } else {
        printf("NULL\n");
    }

    return 0;
} */
