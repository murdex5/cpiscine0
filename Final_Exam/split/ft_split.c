/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 12:39:03 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/26 13:57:39 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	issep(char c, char *charset)
{
	int	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return 1;
		i++;
	}
	return 0;
}

char	*ft_strdup(char	*src, int start, int end)
{
	if (start >= end)
		return NULL;
	if (!src)
		return NULL;
	char	*dest = (char *)malloc(sizeof(char *) * (end - start + 2));
	if (!dest)
		return NULL;
	int	i = 0;
	while (start < end)
	{
		dest[i] = src[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


int	count_words(char *str, char *charset)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (str[i] != '\0')
	{
		if (!issep(str[i], charset))
		{
			while (!issep(str[i], charset))
				i++;
			word_count++;
		}
		i++;
	}
	return (word_count);
}

void	sep_words(char	*str, char *charset, char **strarr, int len)
{
	int	i;
	int	k;
	int	start;

	i = 0;
	start = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (!issep(str[i], charset))
		{
			start = i;
			while(!issep(str[i], charset) && str[i] != '\0')
				i++;
			//printf("su\n");
			if (k < len)
			{
				strarr[k] = ft_strdup(str, start, i);
				if (!strarr[k])
					return;
				k++;
			}
		}
		i++;
	}
	strarr[k] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	char	**strarr;
	if (!str)
		return NULL;
	int	len = count_words(str, charset);
	strarr = malloc(sizeof(char *) * (len + 1));
	if (!strarr)
		return NULL;
	sep_words(str, charset, strarr, len);
	return strarr;
}

int	main(void)
{
	char	*str = "Hello how are you, i am fine. thank you! so the thing is that bkafh?";
	char	*charset = " .";
	char	**strarr;

	strarr = ft_split(str, charset);
	int	i = 0;
	while (strarr[i] != NULL)
	{
		printf("%s\n", strarr[i]);
		i++;
	}
	free(strarr);
	return (0);
}
