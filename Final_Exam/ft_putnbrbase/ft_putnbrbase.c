/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malshapraboth <malshapraboth@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:14:16 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/29 00:03:44 by malshaprabo      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len = 0;
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
	int	num = 20;
	ft_putnbr_base(num, base);
	write(1, "\n", 1);
	return 0;
}
