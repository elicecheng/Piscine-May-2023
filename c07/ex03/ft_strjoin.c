/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:56:38 by jucheng           #+#    #+#             */
/*   Updated: 2023/06/01 16:18:56 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

void	ft_strcat(int size, char **strs, char *sep, char *des)
{
	int		i;
	int		j;
	int		index;

	index = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			des[index++] = strs[i][j++];
		}
		if (i != size - 1)
		{
			j = 0;
			while (sep[j] != '\0')
			{
				des[index++] = sep[j++];
			}
		}
		i++;
	}
	des[index] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*des;
	int		index;
	int		total_len;
	int		i;

	index = 0;
	total_len = 0;
	i = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		if (i != size - 1)
			total_len += ft_strlen(sep);
		i++;
	}
	des = (char *)malloc(sizeof(char) * (total_len + 1));
	ft_strcat(size, strs, sep, des);
	return (des);
}
/*
#include <stdio.h>
int main()
{
	char *str[] = {"hello", "world", "Adelaide"};
	char sep[] = ", ";
	char *res = ft_strjoin(3, str, sep);
	printf("%s", res);
	return 0;
}
*/
