/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:07:38 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/13 17:57:08 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	l;
	int	c;

	l = 0;
	c = 0;
	while (str[c] != '\0' && l == 0)
	{
		if (str[c] >= '0' && str[c] <= '9')
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
int main(int argc, char *argv[])
{
    if  (argc != 2)
    {
        printf("Invalid inputs");
        return 1;
    }
    else
    {
        int i = ft_str_is_numeric(argv[1]);
        printf("%d\n", i);
    }

    return 0;
}*/
