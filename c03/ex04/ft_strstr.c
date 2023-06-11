/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:46:54 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/25 12:13:37 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_ptr;
	char	*to_find_ptr;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str)
	{
		str_ptr = str;
		to_find_ptr = to_find;
		while (*str_ptr && *to_find_ptr && (*str_ptr == *to_find_ptr))
		{
			str_ptr++;
			to_find_ptr++;
		}
		if (*to_find_ptr == '\0')
		{
			return (str);
		}
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%s", ft_strstr("Foo arz  Barzzasdasd Baz", "arzz"));
}
*/
