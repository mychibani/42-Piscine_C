/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:34:44 by ychibani          #+#    #+#             */
/*   Updated: 2021/07/21 11:57:18 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_check_operator(char *str)
{
	if ((ft_strlen(str) == 1)
		&& (str[0] == '-' || str[0] == '+'
			|| str[0] == '*' || str[0] == '%'
			|| str[0] == '/'))
		return (1);
	write(1, "0\n", 2);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (ft_check_operator(argv[2]))
		{
			ft_doop(argv[2], ft_atoi(argv[1]), ft_atoi(argv[3]));
			write(1, "\n", 1);
		}
	}
	return (0);
}
