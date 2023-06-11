/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:22:42 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/25 10:30:29 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0)
	{
		while (*s1 == *s2 && --n && *s1)
		{	
			++s1;
			++s2;
		}
		return (*s1 - *s2);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%i %i %i %i",
		ft_strncmp("that is a test string", "this is a test string",5),
		ft_strncmp("this is a test string", "this is a test", 14),
		ft_strncmp("this isnt a test string", "this is a test", 7),
		ft_strncmp("hello world", "hello", 10));
}
*/
