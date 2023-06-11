/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:08:51 by jucheng           #+#    #+#             */
/*   Updated: 2023/06/01 12:55:05 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	len;
	int	i;

	i = 0;
	len = max - min;
	if (len <= 0)
	{
		return (NULL);
	}
	arr = (int *)malloc(sizeof(int) * len);
	if (arr != NULL)
	{
		while (min < max)
		{
			arr[i] = min;
			i++;
			min++;
		}
	}
	return (arr);
}
/*
int main()
{
   	int *re = ft_range(-2, 10);
   	if (re != NULL)
	{
 		for (int i = 0; i < 10 + 2; i++)
 		{
 			printf("%d ", re[i]);
 		}
 		printf("\n");
 		free(re);
 	}
 	return 0;
 }
 */
