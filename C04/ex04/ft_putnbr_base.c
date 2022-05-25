/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 21:25:12 by ychibani          #+#    #+#             */
/*   Updated: 2021/07/12 17:34:16 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\r'
		|| c == '\f'
		|| c == ' ')
		return (1);
	return (0);
}

int	ft_base_is_valid(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (-1);
	while (base[i])
	{
		if (ft_isspace(base[i]) || base[i] == '+' || base[i] == '-')
			return (-1);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_base_is_valid(base) == -1)
		return ;
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base(2147483648 / ft_strlen(base), base);
		ft_putnbr_base(2147483648 % ft_strlen(base), base);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= ft_strlen(base) && ft_base_is_valid(base))
		ft_putnbr_base(nbr / ft_strlen(base), base);
	ft_putchar(base[nbr % ft_strlen(base)]);
}
