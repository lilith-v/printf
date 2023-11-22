/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print5u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:59:10 by livardan          #+#    #+#             */
/*   Updated: 2021/02/11 13:01:09 by livardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		returnu(t_flags hert, int x)
{
	if (hert.dotnum > hert.number)
	{
		if (hert.dotnum > uerk(x))
			return (hert.dotnum);
		else
			return (uerk(x));
	}
	else if (hert.number > uerk(x))
		return (hert.number);
	else
		return (uerk(x));
}

void	f3u(t_flags hert, int n, int x, int y)
{
	n = hert.dotnum - uerk(x);
	while (n-- && hert.dotnum > uerk(x))
		ft_putchar_fd('0', 1);
	putu(y);
}

int		uhelp(t_flags hert, unsigned int x)
{
	x = hert.number;
	while (hert.number-- > 0)
		ft_putchar_fd(' ', 1);
	return (x);
}

int		uhelp1(t_flags hert, unsigned long long x)
{
	if (hert.number > uerk(x))
		return (hert.number);
	else
		return (uerk(x));
}

int		caseu(va_list arg, t_flags hert)
{
	unsigned int	x;
	unsigned int	y;
	int				n;
	int				z;

	x = va_arg(arg, int);
	y = x;
	z = 0;
	n = 0;
	if (hert.dotnum == 0 && hert.dot != 0 && x == 0)
		return (uhelp(hert, x));
	if (hert.dotnum != 0)
	{
		if (hert.number <= hert.dotnum)
			f3u(hert, n, x, y);
		else
			f1u(hert, z, x, y);
		return (returnu(hert, x));
	}
	else
	{
		f2u(hert, z, x, y);
		return (uhelp1(hert, x));
	}
}
