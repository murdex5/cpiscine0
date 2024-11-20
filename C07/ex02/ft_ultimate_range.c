/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:51:25 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/20 15:22:57 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = (int *)malloc(len * sizeof(int));
	if (!range)
	{
		*range = NULL;
		return (0);
	}
	while (i < len)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (len);
}
/*
int main() {
    int *range;
    int size;

    // Test case 1: Normal case
    size = ft_ultimate_range(&range, 3, 7);
    printf("Test case 1: Range from 3 to 7 (exclusive)\n");
    if (size > 0) {
        for (int i = 0; i < size; i++) {
            printf("%d ", range[i]);
        }
        printf("\nSize: %d\n\n", size);
    } else {
        printf("Invalid range or allocation error.\n\n");
    }
    free(range); // Free the allocated memory

    // Test case 2: min >= max (invalid range)
    size = ft_ultimate_range(&range, 7, 7);
    printf("Test case 2: Range from 7 to 7 (exclusive)\n");
    if (range == NULL) {
        printf("Range is NULL as expected.\n");
    } else {
        printf("Unexpected result.\n");
    }
    printf("Size: %d\n\n", size);

    // Test case 3: min > max (invalid range)
    size = ft_ultimate_range(&range, 10, 5);
    printf("Test case 3: Range from 10 to 5 (exclusive)\n");
    if (range == NULL) {
        printf("Range is NULL as expected.\n");
    } else {
        printf("Unexpected result.\n");
    }
    printf("Size: %d\n\n", size);

    // Test case 4: min is 0 and max is 5
    size = ft_ultimate_range(&range, 0, 5);
    printf("Test case 4: Range from 0 to 5 (exclusive)\n");
    if (size > 0) {
        for (int i = 0; i < size; i++) {
            printf("%d ", range[i]);
        }
        printf("\nSize: %d\n\n", size);
    } else {
        printf("Invalid range or allocation error.\n\n");
    }
    free(range); // Free the allocated memory

    // Test case 5: min equals max (should return 0 and NULL)
    size = ft_ultimate_range(&range, 100, 100);
    printf("Test case 5: Range from 100 to 100 (exclusive)\n");
    if (range == NULL) {
        printf("Range is NULL as expected.\n");
    } else {
        printf("Unexpected result.\n");
    }
    printf("Size: %d\n", size);

    return 0;
}*/
