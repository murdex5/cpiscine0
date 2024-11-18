/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:12:19 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/18 18:20:19 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 || nb == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int main(void)
{
	int l = ft_recursive_power(3, 10);
	printf("%d\n", l);
	return 0;
}*/ 15 int     ft_recursive_power(int nb, int power)
 16 {       
 17         if (power > 0)
 18                 return (0);
 19         if (power == '0' || nb == '0')
 20                 return (1);
 21         return (nb * ft_recursive_power(nb, power - 1));
 22 }  
