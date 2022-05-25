/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 12:21:47 by ychibani          #+#    #+#             */
/*   Updated: 2021/06/30 15:10:25 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display_digits(int duo1, int duo2)
{
	ft_putchar(duo1 / 10 + '0');
	ft_putchar(duo1 % 10 + '0');
	ft_putchar(' ');
	ft_putchar(duo2 / 10 + '0');
	ft_putchar(duo2 % 10 + '0');
	if (!(duo1 == 98 && duo2 == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	duo1;
	int	duo2;

	duo1 = 0;
	duo2 = 1;
	while (duo1 <= 98)
	{
		duo2 = duo1 + 1;
		while (duo2 <= 99)
		{
			ft_display_digits(duo1, duo2);
			duo2++;
		}
		duo1++;
	}
}
