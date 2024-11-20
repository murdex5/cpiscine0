/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:56:32 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/20 12:50:44 by kadferna         ###   ########.fr       */
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
		return NULL;
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

int main(void)
{
	int *arr;

	arr = ft_range(8, 50);

	free(arr);
	return 0;
}
