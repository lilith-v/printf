/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 13:39:39 by livardan          #+#    #+#             */
/*   Updated: 2021/02/02 13:15:30 by livardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	void *res;

	if (!dest && !src)
		return (0);
	res = dest;
	if (src < dest)
	{
		src += size;
		dest += size;
		while (size--)
			*(char*)--dest = *(char*)--src;
	}
	else
		while (size--)
			*(char*)dest++ = *(char*)src++;
	return (res);
}
