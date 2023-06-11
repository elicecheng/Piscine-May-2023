/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:53:19 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/18 16:39:12 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	postive;
	char	negative;

	postive = 'P';
	negative = 'N';
	while (n < 0)
	{
		write (1, &negative, 1);
		return ;
	}
	write (1, &postive, 1);
}
/*

int	main(void)
{
	ft_is_negative(-1);
	return (0);
}
*/
