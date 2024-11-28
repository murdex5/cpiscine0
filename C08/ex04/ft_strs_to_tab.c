/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:06:42 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/27 12:28:55 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*temp;
	int		i;

	i = 0;
	temp = (char *) malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!temp)
		return (NULL);
	while (str[i] != '\0')
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*s;
	int			i;

	i = 0;
	s = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (!s)
		return (NULL);
	while (i < ac)
	{
		s[i].size = ft_strlen(av[i]);
		s[i].str = ft_strdup(av[i]);
		s[i].copy = ft_strdup(s[i].str);
		i++;
	}
	s[i].str = NULL;
	return (s);
}
