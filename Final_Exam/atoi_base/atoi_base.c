/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:29:00 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/28 14:21:02 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	putnbr_base(int nb, char *base)
{
	int	base_len = 0;
	char	c;
	const int	min_int = -2147483648;
	while (base[base_len])
		base_len++;
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == min_int)
		{
			putnbr_base(-(nb / base_len), base);
			c = base[nb % base_len];
			write(1, &c, 1);

			return;
		}
		nb = -nb;
	}

	if (nb >= base_len)
	{
		putnbr_base(nb / base_len, base);
	}
	c = base[nb % base_len];
	write(1, &c, 1);
}

int	atoi_base(char	*str)
{
	int	i = 0;
	int	result = 0;
	int	sign = 1;
	int	minus_counter = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;

	while (str[i] == '-')
	{
		sign = -1;
		minus_counter++;
		i++;
	}
	if (minus_counter > 1)
		return 0;
//	if (!(str[i] >= '0' && str[i] <= 9))
//		return 0;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		result = result * 10 + (str[i] + '0');
		i++;
	}
	return (result * sign);
}

int main(int ac, char **av)
{
	int	num;
	char	*base = "0123456789ABCDEF";
	if (ac != 2)
	{
		return (1);
	}
	else
	{
		num = atoi(av[1]);;
		putnbr_base(num, base);
		num = atoi_base(av[1]);
		putnbr_base(num, base);
	}
	return (0);
}
