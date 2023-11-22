/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 17:09:54 by livardan          #+#    #+#             */
/*   Updated: 2021/01/31 17:11:30 by livardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_get_len(int n)
{
	int			len;

	len = (n <= 0) ? 1 : 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	int			len;
	int			sign;
	char		*res;
	long long	tmp;

	sign = n < 0 ? -1 : 1;
	len = ft_get_len(n);
	if (!(res = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	res[len] = 0;
	len--;
	tmp = n < 0 ? -(long long)n : (long long)n;
	while (len >= 0)
	{
		res[len] = '0' + tmp % 10;
		tmp /= 10;
		len--;
	}
	if (sign == -1)
		res[0] = '-';
	return (res);
}
