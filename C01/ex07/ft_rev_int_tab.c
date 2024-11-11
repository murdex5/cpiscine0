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

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/*
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
}*/