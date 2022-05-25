/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 10:02:13 by ychibani          #+#    #+#             */
/*   Updated: 2021/06/30 15:08:17 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display_comb(int a, int b, int c)
{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(c + 48);
	if (!(a == 7 && b == 8 && c == 9))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	nb1;
	int	nb2;
	int	nb3;

	nb1 = 0;
	nb2 = 1;
	nb3 = 2;
	while (nb1 <= 7)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 8)
		{
			nb3 = nb2 + 1;
			while (nb3 <= 9)
			{
				ft_display_comb(nb1, nb2, nb3);
				nb3++;
			}
			nb2++;
		}
		nb1++;
	}
}
