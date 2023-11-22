/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 13:27:22 by livardan          #+#    #+#             */
/*   Updated: 2021/02/12 15:39:31 by livardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	f3x(t_flags hert, int n, unsigned long long x, unsigned long long y)
{
	n = hert.dotnum - xerk(x);
	while (n-- && hert.dotnum > xerk(x))
		ft_putchar_fd('0', 1);
	xp(y);
}

void	f1x(t_flags hert, int z, unsigned long long x, unsigned long long y)
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
		xp(y);
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
		xp(y);
	}
}

void	xxp(unsigned long long p)
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
			arr[i--] = 'A' - 10 + x;
		p = p / 16;
	}
	write(1, arr + 1 + i, 64 - i - 1);
}
