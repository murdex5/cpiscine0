/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:25:10 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/28 19:33:29 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}


void	wdmatch(char *s1, char *s2)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	j = 0;
	while(s1[i] != '\0')
	{
		while (s2[j] != '\0' && s1[i] != s2[j])
		{
			j++;
		}
		if (s2[j] == '\0')
		{
			write(1, "\n", 1);
			return;
		}
		i++;
		j++;
	}
	ft_putstr(s1);
}


int	main(int ac, char **av)
{
	
	if (ac != 3)
		write(1, "\n", 1);
	else
	{
		wdmatch(av[1], av[2]);
	}
	return 0;
}
