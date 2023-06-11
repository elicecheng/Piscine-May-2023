/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:44:19 by jucheng           #+#    #+#             */
/*   Updated: 2023/06/07 18:06:28 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*des;
	int		len;
	int		i;

	len = ft_strlen(str);
	des = (char *)malloc(sizeof(char) * (len + 1));
	if (des == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i])
	{
		des[i] = str[i];
		i++;
	}
	return (des);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*des;
	int			i;

	des = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (des == NULL)
	{		
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		des[i].size = ft_strlen(av[i]);
		des[i].str = av[i];
		des[i].copy = ft_strdup(av[i]);
		i++;
	}
	des[ac].str = 0;
	des[ac].copy = 0;
	des[ac].size = 0;
	return (des);
}
/*
int	main(void)
{
	struct s_stock_str	*str_arr;
	char				*arr[3];
	int					i;

	arr[0] = "such a nice day";
	arr[1] = "let's go and play";
	arr[2] = "sun is shining";
	i = 0;
	str_arr = ft_strs_to_tab(3, arr);
	while (i <= 3)
	{
		printf("%s\n", str_arr[i].str);
		i++;
	}
	return (0);
}*/
