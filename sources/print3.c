/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:51:09 by livardan          #+#    #+#             */
/*   Updated: 2021/02/11 12:57:20 by livardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		xerk(unsigned long long x)
{
	int i;

	i = 0;
	if (x == 0)
		return (1);
	while (x)
	{
		x /= 16;
		i++;
	}
	return (i);
}

int		minuserk(int x)
{
	int		i;
	long	y;

	y = x;
	i = 0;
	if (x == 0)
		i++;
	if (x < 0)
	{
		i++;
		y = -1 * x;
	}
	while (y)
	{
		y = y / 10;
		i++;
	}
	return (i);
}

int		returnd(t_flags hert, int x)
{
	if (hert.dotnum > hert.number)
	{
		if (hert.dotnum > erktiv(x))
		{
			if (x < 0)
				return (hert.dotnum + 1);
			else
				return (hert.dotnum);
		}
		else
			return (minuserk(x));
	}
	else if (hert.number > minuserk(x))
		return (hert.number);
	else
		return (minuserk(x));
}

int		dhelp(t_flags hert, int x, long y)
{
	int z;

	z = hert.number - erktiv(x);
	if (x < 0)
		z--;
	f1(hert, z, x, y);
	if (hert.number > minuserk(x))
		return (hert.number);
	else
		return (minuserk(x));
}

int		cased(va_list arg, t_flags hert)
{
	int		x;
	long	y;
	int		n;
	int		z;

	x = va_arg(arg, int);
	y = x;
	z = 0;
	n = 0;
	if (hert.dotnum == 0 && hert.dot != 0 && x == 0)
	{
		x = hert.number;
		while (hert.number-- > 0)
			ft_putchar_fd(' ', 1);
		return (x);
	}
	if (hert.dotnum != 0)
	{
		f5(hert, n, x, y);
		return (returnd(hert, x));
	}
	else
		return (dhelp(hert, x, y));
}
