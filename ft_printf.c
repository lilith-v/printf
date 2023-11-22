/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 14:48:45 by livardan          #+#    #+#             */
/*   Updated: 2021/02/12 15:39:05 by livardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libftprintf.h"

void	print1(t_flags *hert, int *i, char *str, va_list arg)
{
	int x;

	x = 0;
	ppp(hert, i, str, arg);
	if (str[*i] <= '9' && str[*i] >= '0')
	{
		while (str[*i] <= '9' && str[*i] >= '0')
			x = x * 10 + (str[(*i)++] - '0');
		hert->number = x;
	}
}

void	ppp(t_flags *hert, int *i, char *str, va_list arg)
{
	if (str[*i] == '-')
	{
		(hert->minus)++;
		(*i)++;
	}
	if (str[*i] == '0')
	{
		hert->zero++;
		if (str[++(*i)] == '-')
		{
			hert->minus++;
			(*i)++;
		}
	}
	if (str[*i] == '*')
	{
		(*i)++;
		hert->number = va_arg(arg, int);
		if (hert->number < 0)
		{
			hert->number = hert->number * -1;
			hert->minus++;
		}
	}
}

void	print2(t_flags *hert, int *i, char *str, va_list arg)
{
	int y;

	y = 0;
	if (str[*i] == '.')
	{
		hert->dot++;
		(*i)++;
		if (str[*i] == '*')
		{
			hert->dotnum = va_arg(arg, int);
			(*i)++;
		}
		else
		{
			while (str[*i] <= '9' && str[*i] >= '0')
				y = y * 10 + (str[(*i)++] - '0');
			hert->dotnum = y;
		}
	}
}

int		print3(t_flags *hert, int *i, char *str, va_list arg)
{
	int j;

	if (str[*i] == 'd')
		j = cased(arg, *hert);
	if (str[*i] == 's')
		j = cases(arg, *hert);
	if (str[*i] == 'p')
		j = casep(arg, *hert);
	if (str[*i] == 'c')
		j = casec(arg, *hert);
	if (str[*i] == 'i')
		j = cased(arg, *hert);
	if (str[*i] == 'x')
		j = xcase(arg, *hert);
	if (str[*i] == 'X')
		j = xxcase(arg, *hert);
	if (str[*i] == 'u')
		j = caseu(arg, *hert);
	if (str[*i] == '%')
		j = casetok(*hert);
	return (j);
}

int		ft_printf(const char *s, ...)
{
	va_list	arg;
	char	*str;
	int		i;
	t_flags	hert;
	int		c;

	va_start(arg, s);
	i = 0;
	str = (char*)s;
	c = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			inic(&i, &hert);
			print1(&hert, &i, str, arg);
			print2(&hert, &i, str, arg);
			c += print3(&hert, &i, str, arg);
		}
		else
			helpprint(str, i, &c);
		i++;
	}
	va_end(arg);
	return (c);
}
