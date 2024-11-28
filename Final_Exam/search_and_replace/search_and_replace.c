/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:31:55 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/28 15:59:41 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

void	search_and_replace(char *str, char *c1, char *c2)
{
	int i = 0;

	while (str[i] != '\0')
	{
		int j = 0;
		while (c1[j])
		{
			if (str[i] == c1[j])
			{
				str[i] = c2[j];
			}
			j++;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	char	*str;
	char	*c1;
	char	*c2;

	if (ac != 4)
		write(1, "\n", 1);
	else
	{
		str = av[1];
		c1 = av[2];
		c2 = av[3];
		if (!(ft_strlen(c1) > 1) || !(ft_strlen(c2) > 1))
		{
			search_and_replace(str, c1, c2);
			ft_putstr(str);
			write(1, "\n", 1);
		}
		else
			write(1, "\n", 1);
	}
	return 0;
}
