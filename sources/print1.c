/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:49:52 by livardan          #+#    #+#             */
/*   Updated: 2021/02/11 12:47:00 by livardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	sc(t_flags hert, char *arr, int i, int *c)
{
	int j;
	int b;

	j = 0;
	i = ft_strlen(arr);
	if ((int)ft_strlen(arr) > hert.dotnum && hert.dotnum != 0)
		b = hert.number - hert.dotnum;
	else
		b = hert.number - ft_strlen(arr);
	if (hert.number > (int)ft_strlen(arr) - hert.dotnum)
		ss(hert, b, arr, c);
	else if (hert.dotnum < (int)ft_strlen(arr) && hert.dotnum != 0)
	{
		ss(hert, b, arr, c);
	}
	else
		while (j < i && ++(*c))
			ft_putchar_fd(arr[j++], 1);
}

void	ss(t_flags hert, int b, char *arr, int *c)
{
	int j;
	int i;

	j = 0;
	i = hert.dotnum;
	if (hert.dotnum > (int)ft_strlen(arr) || hert.dotnum == 0)
		i = ft_strlen(arr);
	if (hert.minus != 0)
	{
		while (j < i && ++(*c))
			ft_putchar_fd(arr[j++], 1);
		while (b-- > 0 && ++(*c))
			ft_putchar_fd(' ', 1);
	}
	else
	{
		while (b-- > 0 && ++(*c))
			ft_putchar_fd(' ', 1);
		while (j < i && ++(*c))
			ft_putchar_fd(arr[j++], 1);
	}
}

int		helpik(t_flags hert, int c)
{
	c = hert.number;
	while (c-- > 0)
		ft_putchar_fd(' ', 1);
	return (hert.number);
}

int		cases(va_list arg, t_flags hert)
{
	int		i;
	char	*arr;
	int		j;
	int		c;

	c = 0;
	arr = va_arg(arg, char *);
	if (!arr)
		arr = "(null)";
	i = hert.dotnum;
	j = 0;
	if (hert.dotnum == 0 && hert.dot != 0)
		return (helpik(hert, c));
	if (hert.dotnum < 0)
		hert.dotnum = 0;
	if (hert.number != 0)
		sc(hert, arr, i, &c);
	else if (hert.dotnum > 0 && hert.dotnum < (int)ft_strlen(arr))
		while (j < hert.dotnum && ++c)
			ft_putchar_fd(arr[j++], 1);
	else
		while (j < (int)ft_strlen(arr) && ++c)
			ft_putchar_fd(arr[j++], 1);
	return (c);
}

int		casetok(t_flags hert)
{
	int i;

	i = hert.number;
	if (hert.minus != 0)
	{
		ft_putchar_fd('%', 1);
		while (--hert.number > 0)
			ft_putchar_fd(' ', 1);
	}
	else if (hert.zero != 0)
	{
		while (--hert.number > 0)
			ft_putchar_fd('0', 1);
		ft_putchar_fd('%', 1);
	}
	else
	{
		while (--hert.number > 0)
			ft_putchar_fd(' ', 1);
		ft_putchar_fd('%', 1);
	}
	if (i != 0)
		return (i);
	return (1);
}
