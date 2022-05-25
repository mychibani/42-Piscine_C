/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:41:05 by ychibani          #+#    #+#             */
/*   Updated: 2021/07/03 17:03:28 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcaseall(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

int	ft_is_not_ascii(char c)
{
	if (!((c >= '0' && c <= '9')
			|| (c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z')))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_strlowcaseall(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (ft_is_not_ascii(str[i - 1])))
			str[i] -= 32;
		i++;
	}
	return (str);
}
