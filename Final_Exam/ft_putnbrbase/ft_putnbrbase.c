/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:14:16 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/28 11:55:00 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len = 0;
	int	i;
	char	c;
	int	min_int = -2147483648;

	while (base[base_len])
		base_len++;
	

	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr == min_int)
		{
			ft_putnbr_base(-(nbr / base_len), base);
			c = base[nbr % base_len];
			write(1, &c, 1);
			return;
		}
		nbr = -nbr;
	}

	if (nbr >= base_len)
	{
		ft_putnbr_base(nbr / base_len, base);
	}

	c = base[nbr % base_len];
	write(1, &c, 1);
}


int main(void)
{
	char *base = "0123456789ABCDEF";
	int	num = -2147483648;
	ft_putnbr_base(num, base);
	return 0;
}
