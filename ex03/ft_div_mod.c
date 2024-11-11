/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:20:57 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/09 18:58:50 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	temp_div;
	int	temp_mod;

	temp_div = a / b;
	temp_mod = a % b;
	*div = temp_div;
	*mod = temp_mod;
}
/*
int main(void)
{
	int a = 18;
	int b = 2;
	int div = 0;
	int mod = 0;

	int *ptr_mod = &mod;
	int *ptr_div = &div;
	ft_div_mod(a, b, ptr_div, ptr_mod);
	printf("a: %d, b: %d, div: %d, mod: %d", a, b, div, mod);
	return 0;	
}*/
