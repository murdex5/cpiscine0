/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:14:12 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/11 16:51:13 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swapped;
	int	start;
	int	end;
	int	temp;

	end = size - 1;
	swapped = 1;
	while (swapped == 1)
	{
		swapped = 0;
		start = 0;
		while (start < end)
		{
			if (tab[start] > tab[start + 1])
			{
				temp = tab[start];
				tab[start] = tab[start + 1];
				tab[start + 1] = temp;
				swapped = 1;
			}
			start++;
		}
		end--;
	}
}

/*
int main(void)
{
	int my_numbers[] =  {1, 5, 3, 2, 6, 4};
	int size = 6;
	
	int *ptr = my_numbers;
	ft_sort_int_tab(ptr, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", my_numbers[i]);

	}
	printf("\n");

	return 0;
}
*/