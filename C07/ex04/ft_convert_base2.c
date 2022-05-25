/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:45:13 by ychibani          #+#    #+#             */
/*   Updated: 2021/07/15 15:26:23 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);
int	ft_check_base(char *base);

int	ft_intlen(int nbr, int base_lengh)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		i++;
	while (nbr)
	{
		nbr /= base_lengh;
		i++;
	}
	return (i);
}

int	ft_all_check(char *base_from, char *base_to)
{
	if (ft_check_base(base_to) == -1)
		return (0);
	if (ft_check_base(base_from) == -1)
		return (0);
	else
		return (1);
}

char	*ft_final_str(int size)
{
	char	*final_str;

	final_str = (char *)malloc(sizeof(char) * size + 1);
	if (!(final_str))
		return (0);
	return (final_str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_to_lengh;
	long	nbr_base_from;
	int		size;
	char	*final_res;

	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (0);
	base_to_lengh = ft_strlen(base_to);
	nbr_base_from = (long)ft_atoi_base(nbr, base_from);
	size = ft_intlen(nbr_base_from, base_to_lengh);
	final_res = ft_final_str(size);
	final_res[size--] = 0;
	if (nbr_base_from < 0)
	{
		final_res[0] = '-';
		nbr_base_from *= -1;
	}
	if (nbr_base_from == 0)
		final_res[size--] = base_to[nbr_base_from % base_to_lengh];
	while (nbr_base_from)
	{
		final_res[size--] = base_to[nbr_base_from % base_to_lengh];
		nbr_base_from /= base_to_lengh;
	}
	return (final_res);
}
