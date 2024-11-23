/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:12:21 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/22 12:41:51 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		write(1, &str[c], 1);
		c++;
	}
	write(1, "\n", 1);
}

void	sort_params(int argc, char *argv[])
{
	int	i;
	int	l;
	int	pass;
	int	swapped;

	pass = 0;
	l = 0;
	while (pass < argc - 1 && l == 0)
	{
		swapped = 0;
		i = 1;
		while (i < argc - pass)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
				swapped = 1;
			}
			i++;
		}
		if (!swapped)
			l = 1;
		pass++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	sort_params(argc - 1, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
