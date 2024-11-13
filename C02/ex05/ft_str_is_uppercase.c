/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:16:08 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/13 10:20:26 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	c;
	int	l;

	l = 0;
	c = 0;
	while (str[c] != '\0' && l == 0)
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
		{
			i = 1;
		}
		else
		{
			i = 0;
			l = 1;
		}
		c++;
	}
	if (str[0] == '\0')
	{
		i = 0;
	}
	return (i);
}
/*
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Invalid inputs");
       		 return 1;
	}
	else
	{
		int i = ft_str_is_uppercase(argv[1]);
		printf("%d\n", i);
	}

	return 0;
}*/
