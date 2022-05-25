/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do-op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:46:21 by ychibani          #+#    #+#             */
/*   Updated: 2021/07/21 11:57:14 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_doop(char *str, int x, int y)
{
	static	void	(*p[5])(int x, int y);

	p[0] = ft_add;
	p[1] = ft_sub;
	p[2] = ft_mod;
	p[3] = ft_mult;
	p[4] = ft_div;
	if (str[0] == '+')
		(*p[0])(x, y);
	else if (str[0] == '-')
		(*p[1])(x, y);
	else if (str[0] == '%')
		(*p[2])(x, y);
	else if (str[0] == '*')
		(*p[3])(x, y);
	else if (str[0] == '/')
		(*p[4])(x, y);
	else
		write(1, "0\n", 2);
}
