/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:51:36 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/18 16:04:12 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	c;
	int	result;
	int	sign;

	c = 0;
	result = 0;
	sign = 1;
	while ((str[c] >= 9 && str[c] <= 13) || str[c] == ' ')
		c++;
	while (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
		{
			sign = -sign;
		}
		c++;
	
	while (str[c] >= '0' && str[c] <= '9')
	{
		result = result * 10 + (str[c] - '0');
		c++;
	}
	return (result * sign);
}
/*
int main(int argc, char *argv[])
{
	int	i;
	int	l;
	if (argc != 2)
	{
		printf("No!!!!!!!!!!\n");
		return 1;
	}
	else
	{
		i = ft_atoi(argv[1]);
		l = atoi(argv[1]);
	}
	printf("%d\n", i);
	printf("%d\n", l);
	return 0;
}*/
