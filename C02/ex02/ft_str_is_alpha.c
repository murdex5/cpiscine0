/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:39:45 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/12 16:54:15 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	c;
	int	l;

	c = 0;
	l = 0;
	while (str[c] != '\0' && l == 0)
	{
		if ((str[c] >= 'A' && str[c] <= 'Z') \
			|| (str[c] >= 'a' && str[c] <= 'z'))
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
		i = 1;
	}
	return (i);
}
/*
int main(int argc, char **argv)
{
	int	i;
	if (argc != 2)
	{
		printf("Invalind input\n");
	}
	else
	{
		i = ft_str_is_alpha(argv[1]);
		printf("%d\n", i);
	}	return 0;
}*/
