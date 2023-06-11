/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:05:50 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/20 13:29:29 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar('0' + a / 10);
			putchar('0' + a % 10);
			putchar(' ');
			putchar('0' + b / 10);
			putchar('0' + b % 10);
			if (a / 10 != 9 || a % 10 != 8)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
