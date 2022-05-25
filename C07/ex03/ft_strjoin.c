/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 21:10:31 by ychibani          #+#    #+#             */
/*   Updated: 2021/07/15 15:29:28 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_str_size(int size, char **strs, char *sep)
{
	int	i;
	int	str_size;

	i = 0;
	str_size = 0;
	while (i < size)
	{
		str_size += ft_strlen(strs[i]);
		i++;
	}	
	if (size > 0)
		str_size += ft_strlen(sep) * (size - 1) + 1;
	return (str_size);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*final_str;

	i = 0;
	len = ft_str_size(size, strs, sep);
	final_str = (char *)malloc(sizeof(char) * len);
	final_str[0] = 0;
	if (!(final_str))
		return (0);
	while (i < size)
	{
		final_str = ft_strcat(final_str, strs[i]);
		if (i < size - 1)
			final_str = ft_strcat(final_str, sep);
		i++;
	}
	final_str[len] = 0;
	return (final_str);
}
