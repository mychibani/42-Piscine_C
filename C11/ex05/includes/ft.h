/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychibani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:36:53 by ychibani          #+#    #+#             */
/*   Updated: 2021/07/21 11:58:45 by ychibani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# define MOD "Stop : modulo by zero"
# define DIV "Stop : division by zero"
int		ft_strlen(char *str);
void	ft_add(int x, int y);
void	ft_sub(int x, int y);
void	ft_mod(int x, int y);
void	ft_mult(int x, int y);
void	ft_div(int x, int y);
void	ft_doop(char *str, int x, int y);
void	ft_swap(int *a, int *b);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	ft_add(int x, int y);
#endif
