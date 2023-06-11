/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 11:06:03 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/20 16:48:05 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_write_line(int w, char start, char middle, char end)
{
	int	iterator;

	iterator = 0;
	while (iterator < w)
	{
		if (iterator == 0)
		{
			ft_putchar(start);
		}
		else if (iterator < w - 1)
		{
			ft_putchar(middle);
		}
		else
		{
			ft_putchar(end);
		}
		iterator++;
	}
}

void	rush(int h, int v)
{
	int	count;

	count = 0;
	if (h > 0 && v > 0)
	{
		while (count < v)
		{
			if (count == 0)
			{
				ft_write_line(h, 'A', 'B', 'C');
			}
			else if (count == v - 1)
			{
				ft_write_line(h, 'C', 'B', 'A');
			}
			else
			{
				ft_write_line(h, 'B', ' ', 'B');
			}
			count++;
			ft_putchar('\n');
		}	
	}
}
