/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 19:11:30 by ychibani          #+#    #+#             */
/*   Updated: 2021/07/08 11:11:16 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_swap(char **ac, char **av)
{
	char	*temp;

	temp = *ac;
	*ac = *av;
	*av = temp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = argc - 1;
	while (i <= argc / 2)
	{
		ft_swap(&argv[i], &argv[j]);
		j--;
		i++;
	}
	i = 1;
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
}
