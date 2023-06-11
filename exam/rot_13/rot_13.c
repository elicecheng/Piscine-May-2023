/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:42:25 by jucheng           #+#    #+#             */
/*   Updated: 2023/06/07 15:03:59 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'm')
		{
			str[i] += 13;
		}
		else if (str[i] >= 'n' && str[i] <= 'z')
		{
			str[i] -= 13;
		}
		else if (str[i] >= 'A' && str[i] <= 'M')
		{
			str[i] += 13;
		}
		else if (str[i] >= 'N' && str[i] <= 'Z')
		{
			str[i] -= 13;
		}
		ft_putchar(str[i]);
		i++;
	}
}
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_rot_13(av[1]);
	}
	ft_putchar('\n');
	return (0);
}
