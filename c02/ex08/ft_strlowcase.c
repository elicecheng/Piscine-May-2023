/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:40:51 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/23 12:14:32 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		else
		{
			i++;
		}
	}
	return (str);
}
/*
#include <string.h>

int	main(void)
{
	char	str[20];

	strcpy(str, "AJEC~[/");
	ft_strlowcase(str);
	printf("%s", str);
}
*/
