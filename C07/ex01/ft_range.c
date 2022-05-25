/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 02:06:12 by ychibani          #+#    #+#             */
/*   Updated: 2021/07/12 22:55:08 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_abs(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	len;

	len = ft_abs(max - min - 1);
	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(int) * len);
	if (!(tab))
		return (0);
	i = 0;
	while (i <= len)
	{
		tab[i] = min++;
		i++;
	}
	return (tab);
}
