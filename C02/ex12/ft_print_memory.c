/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 20:42:08 by ychibani          #+#    #+#             */
/*   Updated: 2021/07/04 15:45:17 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_addr(unsigned long long addr)
{
	char	*hexabase;
	int		i;
	char	final_str[16];

	i = 15;
	hexabase = "0123456789abcdef";
	while (addr > 0)
	{
		final_str[i] = hexabase[addr % 16];
		addr /= 16;
		i--;
	}
	while (i >= 0)
	{
		final_str[i] = '0';
		i--;
	}
	write(1, final_str, 16);
	write(1, ": ", 2);
}

void	ft_print_hexa_value(char *addr, int size)
{
	int		i;
	char	*hexa_base;

	i = 0;
	hexa_base = "0123456789abcdef";
	while (i < size)
	{
		if (i % 2 == 0 && i)
			ft_putchar(' ');
		ft_putchar((unsigned char)hexa_base[addr[i] / 16]);
		ft_putchar((unsigned char)hexa_base[addr[i] % 16]);
		i++;
	}
	while (i < 16)
	{
		if (i % 2 == 0 && i)
			ft_putchar(' ');
		write(1, "  ", 2);
		i++;
	}
	ft_putchar(' ');
}

void	ft_print_text(char *addr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (!((unsigned char)addr[i] >= 32 && (unsigned char)addr[i] < 127))
			ft_putchar('.');
		else
			ft_putchar(addr[i]);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < 16 && i < size)
		{
			i++;
			j++;
		}
		ft_print_addr((unsigned long long)&addr[i - j]);
		ft_print_hexa_value((char *)addr + (i - j), (int)j);
		ft_print_text((char *)addr + (i - j), (int)j);
		ft_putchar('\n');
	}
	return (addr);
}
