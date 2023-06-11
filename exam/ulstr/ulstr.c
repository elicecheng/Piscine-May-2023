/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 13:36:01 by jucheng           #+#    #+#             */
/*   Updated: 2023/06/08 13:39:50 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_ulstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		ft_putchar(str[i]);
		i++;
	}
}
int	main(int ac, char **av)
{
	if(ac == 2)
	{
		ft_ulstr(av[1]);
	}
	ft_putchar('\n');
	return (0);
}
