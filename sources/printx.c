/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:31:13 by livardan          #+#    #+#             */
/*   Updated: 2021/02/11 13:31:52 by livardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	f2x(t_flags hert, int z, unsigned long long x, unsigned long long y)
{
	y = (int)y;
	if (hert.minus != 0)
	{
		z = hert.number - xerk(x);
		xp(x);
		while (z-- && hert.number > xerk(x))
			ft_putchar_fd(' ', 1);
	}
	else
	{
		z = hert.number - xerk(x);
		while (z-- && hert.number > xerk(x))
			ft_putchar_fd(' ', 1);
		xp(x);
	}
}

void	f3xx(t_flags hert, int n, unsigned long long x, unsigned long long y)
{
	n = hert.dotnum - xerk(x);
	while (n-- && hert.dotnum > xerk(x))
		ft_putchar_fd('0', 1);
	xxp(y);
}

void	f1xx(t_flags hert, int z, unsigned long long x, unsigned long long y)
{
	int n;

	n = hert.dotnum - xerk(x);
	if (n > 0)
		z = hert.number - n - xerk(x);
	else
		z = hert.number - xerk(x);
	if (hert.minus != 0)
	{
		while (n-- && hert.dotnum > xerk(x))
			ft_putchar_fd('0', 1);
		xxp(y);
		if (z > 0)
			while (z--)
				ft_putchar_fd(' ', 1);
	}
	else
	{
		if (z > 0)
			while (z--)
				ft_putchar_fd(' ', 1);
		while (n-- && hert.dotnum > xerk(x))
			ft_putchar_fd('0', 1);
		xxp(y);
	}
}

void	xp(unsigned long long p)
{
	int		x;
	char	arr[64];
	int		i;

	i = 63;
	if (p == 0)
		write(1, "0", 1);
	while (p)
	{
		x = p % 16;
		if (x < 10)
			arr[i--] = x + '0';
		else
			arr[i--] = 'a' - 10 + x;
		p = p / 16;
	}
	write(1, arr + 1 + i, 64 - i - 1);
}

void	f2xx(t_flags hert, int z, unsigned long long x, unsigned long long y)
{
	y = (int)y;
	if (hert.minus != 0)
	{
		z = hert.number - xerk(x);
		xxp(x);
		while (z-- && hert.number > xerk(x))
			ft_putchar_fd(' ', 1);
	}
	else
	{
		z = hert.number - xerk(x);
		while (z-- && hert.number > xerk(x))
			ft_putchar_fd(' ', 1);
		xxp(x);
	}
}
