/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:47:32 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/27 19:05:50 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign;
	int	output;

	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	sign = 1;
	output = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign = sign * -1;
		}
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		output = (output * 10) + (*str - '0');
		str++;
	}
	output *= sign;
	return (output);
}
/*
int main() {
    char str[] = " ---+--+1234ab567";
    int result = ft_atoi(str);
    printf("%d\n", result);

    return 0;
}
*/
