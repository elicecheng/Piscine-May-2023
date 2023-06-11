/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:25:12 by jucheng           #+#    #+#             */
/*   Updated: 2023/06/08 13:32:28 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_repeat(char *str)
{
	int	i;
	int	repeat;

	i = 0;
	while (str[i])
	{
		repeat = 1;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			repeat += str[i] - 'a';
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			repeat += str[i] - 'A';
		}
		while (repeat)
		{
			ft_putchar(str[i]);
			repeat--;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_repeat(av[1]);
	}
	ft_putchar('\n');
	return (0);
}

