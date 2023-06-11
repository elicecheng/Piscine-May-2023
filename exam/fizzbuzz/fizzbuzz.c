/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:52:23 by jucheng           #+#    #+#             */
/*   Updated: 2023/06/07 12:21:20 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar("0123456789"[nb % 10]);
}

int	 main(void)
{
	int	n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if (n % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if (n % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
		{
			ft_putnbr(n);
		}
		n++;
		ft_putchar('\n');
	}
}	
