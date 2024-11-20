/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:34:45 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/20 11:54:26 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		len;
	char	*temp;

	len = 0;
	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
	{
		len++;
	}
	temp = malloc(len * sizeof(char));
	len = 0;
	while (str[len] != '\0')
	{
		temp[len] = str[len];
		len++;
	}
	temp[len] = '\0';
	return (temp);
}
/*
int main(void)
{
	char *str = "Hello, World!";
	char *copy = ft_strdup(str);

	printf("%s\n", copy);

	free(copy);
	return 0;
}*/
