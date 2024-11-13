/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:34:46 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/13 15:04:57 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;
	unsigned int	l;

	c = 0;
	l = 0;
	while (src[c] != '\0')
	{
		l++;
		c++;
	}
	c = 0;
	while (c < n - 1)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (l);
}
/*
int main(void)
{
	char *dest, *str;
	unsigned int l, size;
//	int	*ptr_dest, *ptr_str;
	
	str = "Hello";
	size = 6;


	l = ft_strlcpy(dest, str, size);
	printf("%d\n", l);
	return 0;
}*/
