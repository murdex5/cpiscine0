/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 19:24:45 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/09 19:42:32 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_val;
	int	b_val;

	a_val = *a;
	b_val = *b;
	*a = a_val / b_val;
	*b = a_val % b_val;
}

/*
int main(void)
{
	int a = 18;
	int b = 2;

	int *ptr_a = &a;
	int *ptr_b = &b;
	printf("a: %d, b: %d\n", a, b);
	ft_ultimate_div_mod(ptr_a, ptr_b);
	printf("a: %d, b: %d\n", a, b);
	return 0;
}
*/
