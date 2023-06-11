/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:22:56 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/26 11:03:05 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char	*str)
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
	char	str[] = "Hello, world";
	int	len;

	len = ft_strlen(str);
	printf("%d\n",len);

}
*/
