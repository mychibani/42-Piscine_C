/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:32:59 by ychibani          #+#    #+#             */
/*   Updated: 2021/07/12 21:50:33 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char	c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup_charset(char	*str, char *sep)
{
	int		i;
	char	*final_str;

	i = 0;
	while (str[i] && !ft_is_charset(str[i], sep))
		i++;
	final_str = (char *)malloc(sizeof(char) * i + 1);
	if (!(final_str))
		return (0);
	i = 0;
	while (str[i] && !ft_is_charset(str[i], sep))
	{
		final_str[i] = str[i];
		i++;
	}
	final_str[i] = '\0';
	return (final_str);
}

int	ft_compute_size(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!sep)
		return (1);
	while (str[i])
	{
		if (!ft_is_charset(str[i], sep) && str[i])
		{
			while (!ft_is_charset(str[i], sep) && str[i])
				i++;
			count++;
		}
		while (ft_is_charset(str[i], sep) && (str[i]))
			i++;
	}
	return (count);
}

char	**ft_return_malloc_s(int size)
{
	char	**final_tab;

	final_tab = (char **)malloc(sizeof(char *) * (size + 1));
	if (!(final_tab))
		return (0);
	final_tab[0] = 0;
	return (final_tab);
}

char	**ft_split(char *str, char *sep)
{
	int		i;
	int		j;
	char	**final_tab;
	int		size;

	i = 0;
	j = 0;
	size = ft_compute_size(str, sep);
	final_tab = ft_return_malloc_s(size);
	while (j < size)
	{
		if (str[i])
		{
			if (!ft_is_charset(str[i], sep))
			{
				final_tab[j++] = ft_strdup_charset(str + i, sep);
				while (!ft_is_charset(str[i], sep) && str[i])
					i++;
			}
		}
		while (ft_is_charset(str[i], sep) && str[i])
			i++;
	}
	final_tab[j] = 0;
	return (final_tab);
}
