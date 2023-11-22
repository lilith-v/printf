/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print7.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:05:43 by livardan          #+#    #+#             */
/*   Updated: 2021/02/11 13:07:08 by livardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	helpprint(char *str, int i, int *c)
{
	ft_putchar_fd(str[i], 1);
	(*c)++;
}

int		erktiv(int x)
{
	int		i;
	long	y;

	y = x;
	i = 0;
	if (x == 0)
		i++;
	while (y)
	{
		i++;
		y = y / 10;
	}
	return (i);
}

int		casec(va_list arg, t_flags hert)
{
	char	c;
	int		l;
	int		k;

	k = 0;
	l = hert.number;
	c = (char)va_arg(arg, int);
	if (hert.number != 0)
		casecc(hert, c, &k);
	else
	{
		ft_putchar_fd(c, 1);
		k++;
	}
	return (k);
}

void	casecc(t_flags hert, char c, int *k)
{
	if (hert.minus != 0)
	{
		ft_putchar_fd(c, 1);
		(*k)++;
		while (--hert.number && ++(*k))
			ft_putchar_fd(' ', 1);
	}
	else
	{
		while (--hert.number && ++(*k))
			ft_putchar_fd(' ', 1);
		ft_putchar_fd(c, 1);
		(*k)++;
	}
}

void	inic(int *i, t_flags *hert)
{
	(*i)++;
	hert->minus = 0;
	hert->zero = 0;
	hert->dot = 0;
	hert->number = 0;
	hert->dotnum = 0;
}
