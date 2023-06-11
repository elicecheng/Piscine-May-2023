/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:21:27 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/25 17:48:51 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	printf("%i %i %i",
		ft_strcmp("this is a test string", "this is a test string"),
		ft_strcmp("this is a test\0string", "this is a test"),
		ft_strcmp("hello", "hello world"));
}
*/
