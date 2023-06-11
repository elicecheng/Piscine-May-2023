/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:10:52 by jucheng           #+#    #+#             */
/*   Updated: 2023/06/08 16:25:27 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	last_word(char *str)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 126)
		{
			j = i + 1;
		}
		i++;
	}
	while (str[j] >= 33 && str[j] <= 126)
	{
		ft_putchar(str[j]);
		j++;
	}

}

int	main (int ac, char **av)
{
	if (ac == 2)
	{
		last_word(av[1]);
	}
	ft_putchar('\n');
	return (0);
}
