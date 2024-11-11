/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:51:13 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/11 12:11:05 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp_arr_size;
	int	count;
	int	fix_size;

	fix_size = size;

	int	temp_arr[fix_size];

	count = 0;
	temp_arr_size = size - 1;
	while (count < size)
	{
		temp_arr[count] = tab[temp_arr_size];
		count++;
		temp_arr_size--;
	}
	count = 0;
	while (count < size)
	{
		tab[count] = temp_arr[count];
		temp_arr_size++;
		count++;
	}
}

int main(void)
{
	int my_numbers[] =  {1, 2, 3, 4, 5, 6};
	int size = 6;
	
	int *ptr = my_numbers;
	ft_rev_int_tab(ptr, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", my_numbers[i]);
	}
	printf("\n");

	return 0;
}