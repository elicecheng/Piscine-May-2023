/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:32:12 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/22 16:49:24 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdlib.h>


char*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*src;
	char	*dest;

	src = "hello world";
	dest = (char *)malloc(sizeof(char) * 20);
	ft_strncpy(dest, src, 20);
	printf("%s%i%i", dest, dest[15], dest[19]);
}
*/
