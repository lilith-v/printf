/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:51:24 by livardan          #+#    #+#             */
/*   Updated: 2021/02/07 18:07:09 by livardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	f1(t_flags hert, int z, int x, int y)
{
	if (hert.minus != 0)
	{
		ft_putnbr_fd(x, 1);
		while (z-- && hert.number > erktiv(x))
			ft_putchar_fd(' ', 1);
	}
	else if (hert.zero != 0)
	{
		z = hert.number - erktiv(x);
		if (x < 0)
		{
			z--;
			ft_putchar_fd('-', 1);
			y = x * (-1);
		}
		while (z-- && hert.number > erktiv(x))
			ft_putchar_fd('0', 1);
		ft_putnbr_fd(y, 1);
	}
	else
	{
		while (z-- && hert.number > erktiv(x))
			ft_putchar_fd(' ', 1);
		ft_putnbr_fd(x, 1);
	}
}

void	f2(t_flags hert, int n, int x, int y)
{
	n = hert.dotnum - erktiv(x);
	if (x < 0)
	{
		ft_putchar_fd('-', 1);
		y = x * -1;
	}
	while (n-- && hert.dotnum > erktiv(x))
		ft_putchar_fd('0', 1);
	ft_putnbr_fd(y, 1);
}

void	f3(t_flags hert, int n, int x, int z)
{
	long y;

	y = x;
	if (x < 0)
		z--;
	if (z > 0)
		while (z--)
			ft_putchar_fd(' ', 1);
	if (x < 0)
	{
		ft_putchar_fd('-', 1);
		y = x * -1;
	}
	while (n-- && hert.dotnum > erktiv(x))
		ft_putchar_fd('0', 1);
	ft_putnbr_fd(y, 1);
}

void	f4(t_flags hert, int n, int x, int z)
{
	long y;

	y = x;
	if (x < 0)
	{
		z--;
		ft_putchar_fd('-', 1);
		y = x * -1;
	}
	while (n-- && hert.dotnum > erktiv(x))
		ft_putchar_fd('0', 1);
	ft_putnbr_fd(y, 1);
	if (z > 0)
		while (z--)
			ft_putchar_fd(' ', 1);
}

void	f5(t_flags hert, int n, int x, int y)
{
	int z;

	if (hert.number <= hert.dotnum)
		f2(hert, n, x, y);
	else
	{
		n = hert.dotnum - erktiv(x);
		if (n > 0)
			z = hert.number - n - erktiv(x);
		else
			z = hert.number - erktiv(x);
		if (hert.minus != 0)
			f4(hert, n, x, z);
		else
			f3(hert, n, x, z);
	}
}
