/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jucheng <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:28:47 by jucheng           #+#    #+#             */
/*   Updated: 2023/05/31 10:38:10 by jucheng          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*program_name;

	while (argc < 2)
	{	
		program_name = argv[0];
		while (*program_name)
		{
			write(1, program_name, 1);
			program_name++;
		}
		break ;
	}
	write(1, "\n", 1);
	return (0);
}
