/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 11:55:05 by ychibani          #+#    #+#             */
/*   Updated: 2021/07/20 11:10:27 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*final_tab;

	final_tab = (int *)malloc(sizeof(int) * length);
	if (!(final_tab))
		return (0);
	i = 0;
	while (i < length)
	{
		final_tab[i] = (*f)(tab[i]);
		i++;
	}
	return (final_tab);
}
