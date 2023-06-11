/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 17:33:10 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/29 20:53:52 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int num;
	
	num = 16;	
	if (ft_is_prime(num))
	{
		printf("%d is a prime num.\n",num);
	}
	else
	{	
		printf("%d is not a prime num.\n", num);
	}

	return (0);
}
*/
