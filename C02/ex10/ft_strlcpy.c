/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:24:20 by ychibani          #+#    #+#             */
/*   Updated: 2021/07/04 15:44:38 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[i])
		i++;
	if (size)
	{
		while (src[len] && len < size - 1)
		{
			dest[len] = src[len];
			len++;
		}
		dest[len] = '\0';
	}
	return (i);
}
