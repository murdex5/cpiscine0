/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:09:05 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/26 12:34:19 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	issep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup(char *src, int start, int end)
{
	int		i;
	char	*dest;

	if (!src)
		return (NULL);
	i = 0;
	dest = malloc(sizeof(char) * (end - start + 2));
	if (!dest)
		return (NULL);
	while (start <= end)
	{
		dest[i] = src[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_count_words(char *str, char *charset)
{
	int	word_count;
	int	i;

	i = 0;
	word_count = 0;
	while (str[i] != '\0')
	{
		if (!issep(str[i], charset))
		{
			while (!issep(str[i], charset) && str[i] != '\0')
			{
				i++;
			}
			word_count++;
		}
		i++;
	}
	return (word_count);
}

void	ft_join_index(char **strarr, char *str, char *charset)
{
	int	i;
	int	k;
	int	word_count;
	int	start;

	i = 0;
	k = 0;
	word_count = 0;
	start = 0;
	while (str[i] != '\0')
	{
		if (!issep(str[i], charset))
		{
			start = i;
			while (!issep(str[i], charset) && str[i] != '\0')
				i++;
			strarr[k] = ft_strdup(str, start, i - 1);
			if (!strarr[k])
				return ;
			k++;
		}
		i++;
	}
	strarr[k] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	char	**strarr;
	int		len;

	len = ft_count_words(str, charset);
	strarr = malloc(sizeof(char *) * (len + 1));
	if (!strarr)
		return (NULL);
	ft_join_index(strarr, str, charset);
	return (strarr);
}
/*
int	main(void)
{
	char	*str = "Hello World, how are you?";
	char	*charset = " ,?";
	char	**strarr;
	int	i = 0;

	strarr = ft_split(str, charset);
	while (strarr[i] != NULL)
	{
		printf("%s\n", strarr[i]);
		//printf("%d\n", i);
		i++;
	}
	free(strarr);
	return (0);
}*/
