/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_iis_lowercase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:03:34 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/13 10:12:19 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	c;
	int	l;

	l = 0;
	c = 0;
	while (str[c] != '\0' && l == 0)
	{
		if (str[c] >= 'a' && str[c] <= 'z')
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
		int i = ft_str_is_lowercase(argv[1]);
		printf("%d\n", i);
	}

	return 0;
}*/
