/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:35:50 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/24 16:09:33 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
	{
		int	len;

		len = 0;
		while (str[len])
		{
			len++;
		}
		return (len);
	}


unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)	
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	totallen;

	destlen = ft_strlen(dest);
	srclen = ft_srclen(src);
	totallen = deslen + srclen;
	if (size <= destlen)
	{
		return srclen + size;
	}
	while (*src && destlen < size - 1)
	
l}




