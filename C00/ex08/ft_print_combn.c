/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:04:33 by ychibani          #+#    #+#             */
/*   Updated: 2022/01/30 17:18:52 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display_comb(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	if (!(tab[0] == (10 - n)))
		write(1, ", ", 2);
}

void	ft_recursive_combn(int *tab, int n, int start)
{
	if (start > 0)
	{
		tab[start] = tab[start - 1] + 1;
	}
	while (tab[start] < 10)
	{
		if (start == n - 1)
		{
			ft_display_comb(tab, n);
		}
		else
		{
			ft_recursive_combn(tab, n, start + 1);
		}
		tab[start]++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[9];
	int	i;

	i = 0;
	if (n < 0 || n > )
		return ;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	ft_recursive_combn(tab, n, 0);
}
