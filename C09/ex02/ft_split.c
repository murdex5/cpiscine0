/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:32:14 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/23 19:47:00 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_getstr(int start, int end, char *str)
{
	int	i;
	int	len;
	char	*temp;

	len = end - start;
	temp = (char *)malloc(len + 1);
	if (!temp)
		return (NULL);
	i = 0;
	while (i < len)
	{
		temp[i] = str[start + i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

int	ft_get_mem(char *str, char *charset)
{
	int	l;
	int	c;
	int	i;
	int	flag;

	if (!(str) || !(charset))
		return (0);
	i = 0;
	flag = 0;
	l = 0;
	while (str[i] != '0')
	{
		c = 0;
		while (charset[c] != '\0' && flag == 0)
		{
			if (str[i] == charset[c])
			{
				l++;
				flag = 1;
			}
			break;
			c++;
		}
		flag = 0;
		i++;
	}
	return (l);
}

void	join_indexes(char **strarr, char *str, char *charset, int len)
{
	int	i;
	int	c;
	//int	l;
	int	j;
	int	start;

	i = 0;
	//l = 0;
	c = 0;
	start = 0;
	if (!(strarr) || !(str) || !(charset))
		strarr = NULL;
	while (str[c] != '\0' && i < len)
	{
		j = 0;
		while (charset[j] != '\0')
		{
			//printf("he\n");
			if (str[c] == charset[j])
			{
				strarr[i] = ft_getstr(start, c, str);
				start = c+1;
				i++;
			//	printf("shit happens\n");
			}
			break;
			j++;
		}
		c++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**strarr;
	int	len;

	len = ft_get_mem(str, charset);
	strarr = (char **)malloc(len + 1);
	join_indexes(strarr, str, charset, len);
	return (strarr);
}

int	main(void)
{
	char	*str = "Hello, World, how are you?";
	char	**strarr;

	strarr = ft_split(str, " ,?");

	int l= 0;
	for (int i = 0; strarr[i]; i++)
	{
		 printf("%s\n", strarr[i]);
		 l++;
	}

	int i = 0;
	while (i < l)
	{
		free(strarr[i]);
		i++;
	}
	free(strarr);
	return 0;
}
