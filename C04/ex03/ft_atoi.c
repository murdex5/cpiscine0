/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:51:36 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/15 12:45:52 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <limits.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	size_t	cur;
	

	result = 0;
	sign = 1;
	cur = 0;
	while ((str[cur] >= 9 && str[cur] <= 13) || str[cur] == 20)
	{
		cur++;
	}

	if (str[cur] == '-' || str[cur] == '+')
	{
		sign = (str[cur] == '-') ? -1 : 1;
		cur++;
	}

	while (str[cur] >= '0' && str[cur] <= '9')
	{
		if (result > (INT_MAX - (str[cur] - '0')) / 10)
			return (sign == -1 ? INT_MIN : INT_MAX);

		result = result * 10 + (str[cur] - '0');
		cur++;
	}
	return (result * sign);
}

int main(void)
{
	int	i;
	char *hell;

	hell = "Hello --+442121574";
	i = ft_atoi(hell);
	printf("%d\n", i);
	return 0;
}
