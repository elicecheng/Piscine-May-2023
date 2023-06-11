/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:45:54 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/21 13:46:56 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	while (size >= 0)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		size--;
	}
}
/*
int	main(void)
{
	int	tab[5] = {4, 5, 0, 6, 1};
	int	size;
	size = sizeof(tab) / sizeof(tab[0]);
	int	i;

	ft_sort_int_tab(tab, size);

	for (i = 0; i < size; i++) 
	{
		char digit = tab[i] + '0';
		write(1, &digit, 1);
		write(1, " ", 1);
	}
	return 0;
}
*/
