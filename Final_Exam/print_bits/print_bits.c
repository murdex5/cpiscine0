/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:18:00 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/28 14:39:36 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	print_bits(unsigned int octec)
{
	int i = 7;
	char c;
	while (i >= 0)
	{
		c = ((octec >> i) & 1) + '0';
		write(1, &c, 1);
		i--;
	}
	write(1, "\n", 1);
}

int main(void)
{
	print_bits(900);
}
