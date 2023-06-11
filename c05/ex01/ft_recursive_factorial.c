/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:27:49 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/28 15:14:25 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	r *= nb * ft_recursive_factorial(nb - 1);
	return (r);
}
/*
int main() {
	int	number1 = 5;
	int	number2 = 0;
	int	number3 = -1;
	int	factorial1 = ft_recursive_factorial(number1);
	int	factorial2 = ft_recursive_factorial(number2);
	int	factorial3 = ft_recursive_factorial(number3);

	printf("Factorial1 of %d is %d\n", number1, factorial1);
	printf("Factorial2 of %d is %d\n", number2, factorial2);
	printf("Factorial3 of %d is %d\n", number3, factorial3);
  
	return 0;
}
*/
