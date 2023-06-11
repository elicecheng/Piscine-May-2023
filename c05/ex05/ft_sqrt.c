/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:30:19 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/29 18:07:15 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while ((i * i <= nb) && (i <= 46340))
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
int main(void) 
{
	printf("%i\n",ft_sqrt(INT_MAX));
}
*/
