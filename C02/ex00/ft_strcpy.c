/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadferna <kadferna@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:31:24 by kadferna       #+#    #+#             */
/*   Updated: 2024/11/11 21:31:26 by kadferna      ###   ########.fr       */
/*                                                                            */
/******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
char    *ft_strcpy (char *dest, char *src)
{
    int i;

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
int get_length(char *str)
{
    int len;

    while (str[len] != '\0')
    {
        len++;
    }

    return len;
}

int main(void)
{

    char *gg = "Hello, World!";
    // Allocate enough memory for 'hello' to hold 'gg' and the null terminator
    char *hello = malloc((strlen(gg) + 1) * sizeof(char));

    if (hello == NULL) {
        // Check if memory allocation failed
        printf("Memory allocation failed\n");
        return 1;
    }

    char *ll = ft_strcpy(hello, gg);
    printf("%s\n", hello);

    // Free the allocated memory
    free(hello);
    return 0;
} */