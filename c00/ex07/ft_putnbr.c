/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 09:49:07 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/21 14:14:18 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 10)
	{
		ft_putnbr(nb / 10 + '0');
		ft_putnbr(nb % 10 + '0');
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
/*
int	main(void)
{
	ft_putnbr(42);
	ft_putnbr(-44);
	ft_putnbr(1);
	
	return (0);
}
*/
