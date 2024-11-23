/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 14:35:18 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/23 16:02:25 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*get_string(int start, int end, char *str)
{
	int	len;
	char	*temp;
	int	i;

	len =  end - start;
	i = 0;
	temp = (char *)malloc(len + 1);
	if (!temp)
		return (NULL);
	while (start < end)
	{
		temp[i] = str[start];
		start++;
	}
	return (temp);
}

void	ft_alloc_int_mem(int **arr, char *str, char *charset)
{
	int	i;
	int	c;
	int	l;

	while (str[i] != '\0')
	{
		c = 0;
		while (charset[c] != '\0')
		{
			c = 0;
			if (str[i] == charset[c])
				l++;
			c++;
		}
		i++;
	}
	arr = (int *)malloc(l * sizeof(int));
	if (!arr)
		arr = NULL;
}

void	ft_alloc_str_mem(int **arr, char **strarr, char *str, char *charset)
{
	int	i;
	int	c;
	int	len;
	int	l;
	int	start;

	i = 0;
	l = 0;
	start = 0;
	while (!str[i])
	{
		c = 0;
		while (!charset[c])
		{
			if (str[i] == charset[c])
			{
				if (l < 1)
				{
					len = ft_strlen(ft_getstring(str[0], str[i]));
				}
				else
				{
					len = ft_strlen(ft_getstring(str[start], str[i]));
				}
				start = i;
				l++;
			}
			c++;
		}
		i++;
	}
}
char	**ft_split(char *str, char *charset)
{
	int	**intarr;
	char	**strarr;

	intarr = ft_alloc_int_mem(intarr, str, charset);

}

int	main(void)
{
	int	*str;
	int	**str_arr;
	str = "Hello world, how are you?";
	str_arr = ft_split(str, " ,?");

	int i = 0;
	while (str_arr[i] != NULL)
	{
		//int l = 0;
		printf("%s\n", str_arr[i]);
		i++;
	}
	free(str_arr);
	return 0;
}
