/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:38:38 by jucheng           #+#    #+#             */
/*   Updated: 2023/06/08 18:21:46 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	inter(char *s1, char *s2)
{	
	int i;
	int	j;
	char temp;

	i = 0;
	while (s1[i])
	{
		while (s2[j])
		{
			if (s1[i] == s2[j] && temp != s1[i])
			{
				ft_putchar(s1[i]);
				temp = s1[i];
				break;
			}
			j++;
		}
		i++;	
	}
}
int	main(int ac, char **av)
{
	if (ac == 3)
	{
		inter(av[1], av[2]);
	}
	ft_putchar('\n');
	return (0);
}
