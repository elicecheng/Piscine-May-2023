/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:57:35 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/21 14:39:37 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}
/*
int	main(void)
{
	char	*str;
	char	len;

	str = "Hi";
	len = ft_strlen(str) + '0';
	write(1, &len, 1);
	return (0);
}
*/
