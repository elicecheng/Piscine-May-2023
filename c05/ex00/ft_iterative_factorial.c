/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:50:20 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/28 15:14:50 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = 1;
	while (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		f *= nb;
		nb--;
	}
	return (f);
}
/*
int main() 
{
    int num = 5;
    int result = ft_iterative_factorial(num);

    printf("Factorial of %d is %d\n", num, result);

    return (0);
}
*/
