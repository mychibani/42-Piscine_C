/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operators.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 15:31:09 by ychibani          #+#    #+#             */
/*   Updated: 2021/07/21 11:57:29 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_add(int x, int y)
{
	return (ft_putnbr(x + y));
}

void	ft_sub(int x, int y)
{
	return (ft_putnbr(x - y));
}

void	ft_mod(int x, int y)
{
	if (y == 0)
	{
		write(1, MOD, ft_strlen(MOD));
		return ;
	}
	return (ft_putnbr(x % y));
}

void	ft_mult(int x, int y)
{
	return (ft_putnbr(x * y));
}

void	ft_div(int x, int y)
{
	if (y == 0)
	{
		write(1, DIV, ft_strlen(DIV));
		return ;
	}
	return (ft_putnbr(x / y));
}
