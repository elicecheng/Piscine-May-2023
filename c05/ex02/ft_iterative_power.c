/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 14:52:50 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/28 17:31:54 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		result *= nb;
		power --;
	}	
	return (result);
}
/*
int	main(void)
{
	int	output;

	output = ft_iterative_power(2,5);

	printf("Result is %d",output);
	return (0);
}
*/
