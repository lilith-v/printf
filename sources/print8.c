/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print8.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:05:51 by livardan          #+#    #+#             */
/*   Updated: 2021/02/11 13:17:19 by livardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

int		casep(va_list arg, t_flags hert)
{
	unsigned long long	p;
	int					i;
	unsigned long long	x;
	int					c;

	p = va_arg(arg, unsigned long long);
	x = p;
	i = xerk(x);
	c = i;
	if (!hert.dot && p == 0)
		return (phelp(hert, i));
	else if (hert.dot != 0 && p == 0)
		return (phelp1(hert, i));
	else if (hert.number != 0)
		return (phelp2(hert, i, c, p));
	else
		casepp(p);
	return (c + 2);
}

void	putu(unsigned int n)
{
	char c;

	if (n / 10)
		putu(n / 10);
	c = '0' + n % 10;
	write(1, &c, 1);
}

int		uerk(unsigned int n)
{
	int i;

	i = 0;
	if (n == 0)
		i++;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

void	f1u(t_flags hert, int z, int x, int y)
{
	int n;

	n = hert.dotnum - uerk(x);
	if (n > 0)
		z = hert.number - n - uerk(x);
	else
		z = hert.number - uerk(x);
	if (hert.minus != 0)
	{
		while (n-- && hert.dotnum > uerk(x))
			ft_putchar_fd('0', 1);
		putu(y);
		if (z > 0)
			while (z--)
				ft_putchar_fd(' ', 1);
	}
	else
	{
		if (z > 0)
			while (z--)
				ft_putchar_fd(' ', 1);
		while (n-- && hert.dotnum > uerk(x))
			ft_putchar_fd('0', 1);
		putu(y);
	}
}

void	f2u(t_flags hert, int z, int x, int y)
{
	if (hert.minus != 0)
	{
		z = hert.number - uerk(x);
		putu(x);
		while (z-- && hert.number > uerk(x))
			ft_putchar_fd(' ', 1);
	}
	else if (hert.zero != 0)
	{
		z = hert.number - uerk(x);
		while (z-- && hert.number > uerk(x))
			ft_putchar_fd('0', 1);
		putu(y);
	}
	else
	{
		z = hert.number - uerk(x);
		while (z-- && hert.number > uerk(x))
			ft_putchar_fd(' ', 1);
		putu(x);
	}
}
