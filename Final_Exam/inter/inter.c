/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:47:45 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/28 11:06:20 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	inter(char *str1, char *str2)
{
	int	vf[128];
	int	i;
	char	c;

	i = 0;
	while (i < 128)
		vf[i++] = 0;
	i = 0;
	while (str2[i])
	{
		if (vf[(int)str2[i]] == 0)
		{
			vf[(int)str2[i]] = 1;
		}
		i++;
	}
	i = 0;
	while (str1[i])
	{
		if (vf[(int)str1[i]] == 1)
		{
			vf[(int)str1[i]] = 2;
		}
		i++;
	}
	i = 0;
	while (i < 128)
	{
		if (vf[i] == 2)
		{
			c = i;
			write(1, &c, 1);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Hello\n");
		return 1;
	}
	else
	{
		char *str = av[1];
		char *str1 = av[2];
		inter(av[1], av[2]);
		//printf("%s\n", str2);
	}
	return (0);
}
