/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_vid_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:53:21 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/22 12:18:23 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

void	ft_ultimate_div_mod(int*a, int*b);

int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("%i %i", a, b);
}
*/
