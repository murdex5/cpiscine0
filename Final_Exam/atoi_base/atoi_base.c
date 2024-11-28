/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:29:00 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/28 17:11:44 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
int	atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int	sign = 1;
	int	result = 0;
	if (str_base < 2 || str_base > 16)
		return 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		result *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			result += str[i] - 48;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			result += str[i] - 55;
		else if (str[i] >= 'a' && str[i] <= 'z')
			result += str[i] - 87;
		i++;
	}
	return result * sign;
}


int main(int ac, char **av)
{
	if (ac != 3)
		return 1;
	else
	{
		int num = atoi_base(av[1], atoi(av[2]));
		printf("%d\n", num);
	}
	return 0;
}
