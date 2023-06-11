/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:00:00 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/23 12:11:10 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 32) && (str[i] <= 126))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	printf("%i%i%i%i",
		ft_str_is_printable("asdahja s'df/vcksd\\34~"),
		ft_str_is_printable("\n \t\v\'\x0B"),
		ft_str_is_printable(""),
		ft_str_is_printable("\x10\x7F\x1F"));
}
*/
