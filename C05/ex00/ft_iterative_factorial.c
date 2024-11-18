/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:39:44 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/18 17:01:54 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	c;

	c = 0;
	while (nb > 1)
	{
		c *= nb;
		nb--;
	}
	return (c);
}
/*
int main(void)
{
	int l = ft_iterative_factorial(5);
	printf("%d\n", l);
	return 0;
}*/
