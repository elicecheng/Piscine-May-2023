/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:05:44 by jucheng           #+#    #+#             */
/*   Updated: 2023/06/07 17:26:50 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*des;
	int		len;
	int		i;

	len = ft_strlen(src);
	des = (char *)malloc(sizeof(char) * (len + 1));
	if (des == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i])
	{
		des[i] = src[i];
		i++;
	}
	return (des);
}
