/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:12:49 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/13 12:40:48 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	c;

	c = 0;
	if (str[c] >= 'a' && str[c] <= 'z')
	{
		str[c] = str[c] - 32;
	}
	c++;
	while (str[c] != '\0')
	{
		if ((str[c - 1] == ' ' || ((str[c - 1] < 'A' || str[c - 1] > 'Z')
					&& (str[c - 1] < 'a' || str[c - 1] > 'z')))
			&& (str[c] >= 'a' && str[c] <= 'z')
			&& !(str[c - 1] >= '0' && str[c - 1] <= '9'))
		{
			str[c] = str[c] - 32;
		}
		else if (str[c] >= 'A' && str[c] <= 'Z')
		{
			str[c] = str[c] + 32;
		}
		c++;
	}
	return (str);
}

/*
int main(int argc, char **argv)
{
	char	*i;
	if (argc != 2)
	{
		printf("Invalind input\n");
		return 1;
	}
	else
	{
		i = ft_strcapitalize(argv[1]);
		printf("%s\n", i);
	}	return 0;
}*/
