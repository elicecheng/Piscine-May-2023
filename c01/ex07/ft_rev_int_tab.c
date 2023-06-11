/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:45:54 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/21 14:27:19 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
/*
int	main(void)
{
	int	tab[5] = {1, 2, 3, 4,5};
	int	size;
	size = sizeof(tab) / sizeof(tab[0]);
	int	i;

	ft_rev_int_tab(tab, size);
	for (i = 0; i < size; i++)
	{
		char digit;
	   	digit = tab[i] + '0';
		write(1, &digit, 1);
		write(1, " ", 1);
	}
	return (0);
}
*/
