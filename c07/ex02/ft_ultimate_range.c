/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 15:36:00 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/31 16:07:24 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	i = 0;
	len = max - min;
	if (len <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * len);
	if (*range != NULL)
	{
		while (min < max)
		{
			(*range)[i] = min;
			i++;
			min++;
		}
		return (i);
	}
	return (-1);
}
/*
int main()
 {
     int **re = malloc(sizeof(int *));
     int i = ft_ultimate_range(re, 0, 10);
     if (re[0] != NULL)
 	{
 		for (int j = 0; j < i; j++)
 		{
 			printf("%d ", re[0][j]);
 		}
 		printf("\n");
 		free(re);
 	}
 	return 0;
}*/
