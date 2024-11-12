/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:11:28 by kadferna          #+#    #+#             */
/*   Updated: 2024/11/12 10:14:17 by kadferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main()
{
    char src[] = "Hello, World!";
    char dest[50];

    ft_strcpy(dest, src);

    
    printf("Source string: %s\n", src);
    printf("Destination string after ft_strcpy: %s\n", dest);

    return 0;
}*/
