/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:20:33 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/24 16:10:13 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
	{
		ptr++;
	}
	while (*src && nb > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		nb--;
	}
	*ptr = '\0';
	return (dest);
}
/*
int	main(void)
{
	char*left;
	char*right;

	left = strcpy(malloc(sizeof (char) * 50), "hello ");
	right = strcpy(malloc(sizeof (char) * 50), "world");
	printf("%s", ft_strncat(left, right, 6));
	free(left);
	left = strcpy(malloc(sizeof (char) * 50), "hello ");
	printf("%s", ft_strncat(left, right, 3));
	free(left);
}
*/
