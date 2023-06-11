/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:20:33 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/24 14:34:52 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
	{
		ptr++;
	}
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
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
	right = strcpy(malloc(sizeof (char) * 10), "world");
	printf("%s", ft_strcat(left, right));
}
*/
