/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:23:53 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/13 10:40:14 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < ' ' || str[c] > '~')
		{
			return (0);
		}
		c++;
	}
	return (1);
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
		int i = ft_str_is_printable(argv[1]);
		printf("%d\n", i);
	}

	return 0;
}*/
