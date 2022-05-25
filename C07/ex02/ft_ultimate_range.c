/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:27:28 by ychibani          #+#    #+#             */
/*   Updated: 2021/07/12 22:54:34 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_abs(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	count;

	count = 0;
	len = ft_abs(max - min - 1);
	i = 0;
	if (min >= max)
	{
		(*range) = 0;
		return (0);
	}
	(*range) = (int *)malloc(sizeof(int) * len);
	if (!(*range))
		return (-1);
	while (i <= len)
	{
		(*range)[i] = min;
		i++;
		min++;
		count++;
	}
	return (count);
}
