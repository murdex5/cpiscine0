/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:03:48 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/26 15:38:39 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	minus_count;
	int	result;

	i = 0;
	sign = 1;
	minus_count = 0;
	result = 0;
	while (str[i] != '\0')
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		while (str[i] == '-')
		{
			sign = -sign;
			minus_count++;
			i++;
		}
		if (minus_count > 1)
			return (0);
		if (!(str[i] >= '0' && str[i] <= '9'))
			return 0;
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
		}
		i++;
	}
	return result * sign;
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		return 1;
	else
	{
		int num = ft_atoi(argv[1]);
		printf("%d\n", num);
		num = atoi(argv[1]);
		printf("%d\n", num);
	}
	return 0;
}
