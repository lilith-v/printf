/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:59:45 by livardan          #+#    #+#             */
/*   Updated: 2021/02/12 15:37:22 by livardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		xhelp(t_flags hert, unsigned long long x)
{
	x = hert.number;
	while (hert.number-- > 0)
		ft_putchar_fd(' ', 1);
	return (x);
}

int		xhelp2(t_flags hert, unsigned long long x)
{
	if (hert.number > xerk(x))
		return (hert.number);
	else
		return (xerk(x));
}

int		xxcase(va_list arg, t_flags hert)
{
	unsigned long long	x;
	unsigned long long	y;
	int					n;
	int					z;

	x = va_arg(arg, unsigned int);
	y = x;
	z = 0;
	n = 0;
	if (hert.dotnum == 0 && hert.dot != 0 && x == 0)
		return (xhelp(hert, x));
	if (hert.dotnum != 0)
	{
		if (hert.number <= hert.dotnum)
			f3xx(hert, n, x, y);
		else
			f1xx(hert, z, x, y);
		return (returnx(hert, x));
	}
	else
	{
		f2xx(hert, z, x, y);
		return (xhelp2(hert, x));
	}
}

int		xcase(va_list arg, t_flags hert)
{
	unsigned long long	x;
	unsigned long long	y;
	int					n;
	int					z;

	x = va_arg(arg, unsigned int);
	y = x;
	z = 0;
	n = 0;
	if (hert.dotnum == 0 && hert.dot != 0 && x == 0)
		return (xhelp(hert, x));
	if (hert.dotnum != 0)
	{
		if (hert.number <= hert.dotnum)
			f3x(hert, n, x, y);
		else
			f1x(hert, z, x, y);
		return (returnx(hert, x));
	}
	else
	{
		f2x(hert, z, x, y);
		return (xhelp2(hert, x));
	}
}

int		returnx(t_flags hert, unsigned long long x)
{
	if (hert.dotnum > hert.number)
	{
		if (hert.dotnum > xerk(x))
			return (hert.dotnum);
		else
			return (xerk(x));
	}
	else if (hert.number > xerk(x))
		return (hert.number);
	else
		return (xerk(x));
}
