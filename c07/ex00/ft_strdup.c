/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 10:48:49 by jucheng           #+#    #+#             */
/*   Updated: 2023/06/01 12:32:38 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char			*des;
	char			*descpy;
	unsigned int	size;

	size = 0;
	while (src[size])
	{
		size++;
	}
	des = (char *)malloc(sizeof(char) * (size + 1));
	if (des == NULL)
	{
		return (NULL);
	}
	descpy = des;
	while (*src)
	{
		*des = *src;
		src++;
		des++;
	}
	*des = '\0';
	return (descpy);
}
/*
int main(void)
{
    char *source = "Hello, world!"; // Source string

    // Call ft_strdup to create a duplicate string
    char *duplicate = ft_strdup(source);

    if (duplicate != NULL)
    {
        printf("Source string: %s\n", source);
        printf("Duplicate string: %s\n", duplicate);

        // Free the memory allocated for the duplicate string
        free(duplicate);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
