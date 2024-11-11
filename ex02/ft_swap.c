/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:46:54 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/09 19:22:14 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main(void)
{
	int a = 1;
	int b = 2;

	int *ptr_a = &a;
	int *ptr_b = &b;

	swap(ptr_a, ptr_b);
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}
*/
