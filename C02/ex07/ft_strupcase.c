/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:42:42 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/13 11:04:19 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
		{
			str[c] = str[c] - 32;
		}
		c++;
	}
	return (str);
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
		char *i = ft_strupcase(argv[1]);
		printf("%s\n", i);
	}

	return 0;
}*/
