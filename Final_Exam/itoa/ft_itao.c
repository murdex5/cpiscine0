/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itao.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:24:57 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/27 14:41:10 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	absolute(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int	get_digits(int nb)
{
	int	digits;
	digits = 0;
	if (nb <= 0)
		++digits;
	while (nb != 0)
	{
		digits++;
		nb = nb / 10;
	}
	return (digits);
}

char	*ft_itoa(int nb)
{
	char	*result;
	int	len;

	len = get_digits(nb);
	result = malloc(sizeof(char) * (len + 1));
	result[len] = '\0';

	if (nb < 0)
		result[0] = '-';
	while (nb != 0)
	{
		--len;
		result[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (result);
}

int main(void)
{
	char *str = ft_itoa(8899);
	printf("%s\n", str);
	return (0);
}
