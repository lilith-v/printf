/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 13:19:46 by livardan          #+#    #+#             */
/*   Updated: 2021/01/30 13:32:42 by livardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n--)
	{
		*(char*)dest = *(char*)src;
		dest++;
		if (*(unsigned char*)src == (unsigned char)c)
			return (dest);
		src++;
	}
	return (0);
}
