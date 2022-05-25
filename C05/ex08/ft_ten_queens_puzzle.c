/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:37:05 by ychibani          #+#    #+#             */
/*   Updated: 2021/07/06 18:40:35 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display_tab(int *tab)
{
	int		i;
	char	final_tab[11];

	i = 0;
	while (i <= 9)
	{
		final_tab[i] = tab[i] + 48;
		i++;
	}
	final_tab[i] = '\n';
	write(1, final_tab, 11);
}

int	ft_abs(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int	ft_not_diagonal(int *tab, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		if (i - j == tab[i] - tab[j] || j - i == tab[i] - tab[j])
			return (0);
		if (tab[i] == tab[j])
			return (0);
		j++;
	}
	return (1);
}

void	ft_recursive_solutions(int *tab, int *count, int start)
{
	tab[start] = 0;
	while (tab[start] < 10)
	{
		if (ft_not_diagonal(tab, start))
		{
			if (start == 9)
			{
				ft_display_tab(tab);
				(*count)++;
			}
			else
			{
				ft_recursive_solutions(tab, count, start + 1);
			}
		}
		tab[start]++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[9];
	int	solutions;

	solutions = 0;
	ft_recursive_solutions(tab, &solutions, 0);
	return (solutions);
}
