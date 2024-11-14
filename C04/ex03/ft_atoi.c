/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:51:36 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/14 18:40:17 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char src)
{
	int	l;

	l = 0;
	while (dest[l] != '\0')
		l++;
	if (src == '\0')
		return (dest);

	dest[l + 1] = src;
	dest[l + 2] = '\0';
	return (dest);
}


int	ft_atoi(
