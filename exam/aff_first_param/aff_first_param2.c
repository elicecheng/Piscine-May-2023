/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:19:45 by jucheng           #+#    #+#             */
/*   Updated: 2023/06/08 17:32:45 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(int ac, char **av)
{
	int	i;
	int j;

	i = 1;
	j = 0;

	if (ac <= 1)
	{
		ft_putchar('\n');
	}
	if (i < ac)
	{
		while(av[1][j])
		{
			ft_putchar(av[1][j]);
			j++;
		}
		ft_putchar('\n');
	}
	return (0);
}
