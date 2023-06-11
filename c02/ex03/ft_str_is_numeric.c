/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:00:00 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/22 17:12:05 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
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
		ft_str_is_numeric("345783"),
		ft_str_is_numeric("37895sd"),
		ft_str_is_numeric(""),
		ft_str_is_numeric("asdjkasdhka"));
}
*/
