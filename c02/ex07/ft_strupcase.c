/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:40:51 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/22 18:02:52 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
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

char*ft_strupcase(char*str);

int	main(void)
{
	char	str[20];

	strcpy(str, "abcxyz091~[/");
	ft_strupcase(str);
	printf("%s", str);
}
*/
