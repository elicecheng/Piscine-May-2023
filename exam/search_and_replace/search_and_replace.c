/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:27:32 by jucheng           #+#    #+#             */
/*   Updated: 2023/06/07 13:59:30 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 4)
	{
		if(ft_strlen(av[2]) == 1 && ft_strlen(av[3]) == 1)
		{
			while(av[1][i])
			{
				if(av[1][i] == av[2][0])
				{
					av[1][i] = av[3][0];
				}
				ft_putchar(av[1][i]);
				i++;
			}	
		}
	}
	ft_putchar('\n');
	return (0);
}
