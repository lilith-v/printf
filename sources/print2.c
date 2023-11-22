/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 14:50:55 by livardan          #+#    #+#             */
/*   Updated: 2021/02/11 12:53:51 by livardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	casepp(unsigned long long p)
{
	int		x;
	char	arr[64];
	int		i;

	i = 62;
	while (p)
	{
		x = p % 16;
		if (x < 10)
			arr[i--] = x + '0';
		else
			arr[i--] = 'a' - 10 + x;
		p = p / 16;
	}
	arr[63] = '\0';
	write(1, "0x", 2);
	write(1, arr + 1 + i, 63 - i - 1);
}

void	pp(t_flags hert, int b, unsigned long long p)
{
	if (hert.minus != 0)
	{
		casepp(p);
		while (b--)
			ft_putchar_fd(' ', 1);
	}
	else if (hert.zero != 0)
	{
		while (b--)
			ft_putchar_fd('0', 1);
		casepp(p);
	}
	else
	{
		while (b--)
			ft_putchar_fd(' ', 1);
		casepp(p);
	}
}

int		phelp(t_flags hert, int i)
{
	i = hert.number - 3;
	if (hert.minus != 0)
	{
		write(1, "0x0", 3);
		while (i-- > 0)
			ft_putchar_fd(' ', 1);
	}
	else
	{
		while (i-- > 0)
			ft_putchar_fd(' ', 1);
		write(1, "0x0", 3);
	}
	if (hert.number > 3)
		return (hert.number);
	else
		return (3);
}

int		phelp1(t_flags hert, int i)
{
	i = hert.number - 2;
	if (hert.minus != 0)
	{
		write(1, "0x", 2);
		while (i-- > 0)
			ft_putchar_fd(' ', 1);
	}
	else
	{
		while (i-- > 0)
			ft_putchar_fd(' ', 1);
		write(1, "0x", 2);
	}
	if (hert.number > 2)
		return (hert.number);
	else
		return (2);
}

int		phelp2(t_flags hert, int i, int c, unsigned long long p)
{
	int b;

	b = hert.number - i - 2;
	if (hert.number > i + 2)
		pp(hert, b, p);
	else
		casepp(p);
	if (hert.number > c + 2)
		return (hert.number);
	return (c + 2);
}
