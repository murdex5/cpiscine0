/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:10:03 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/13 15:48:50 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_hex(int np)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (np > 16)
	{
		print_hex(np / 16);
		print_hex(np % 16);
	}
	else
	{
		write(1, &hex[np], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 0 && str[c] <= 31) || str[c] == 127)
		{
			write(1, "\\", 1);
			if (str[c] < 16)
				write(1, "0", 1);
			print_hex(str[c]);
		}
		else
			write(1, &str[c], 1);
		c++;
	}
}

/*
int main(void)
{
	char *str = "\x1F";

	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return 0;
}*/
