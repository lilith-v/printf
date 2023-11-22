/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 12:49:19 by livardan          #+#    #+#             */
/*   Updated: 2021/02/03 11:44:59 by livardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *src, size_t size)
{
	void *res;

	if (!d && !src)
		return (0);
	res = d;
	while (size--)
		*(char*)d++ = *(char*)src++;
	return (res);
}
