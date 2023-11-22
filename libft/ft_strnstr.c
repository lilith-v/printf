/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 12:36:16 by livardan          #+#    #+#             */
/*   Updated: 2021/02/03 11:45:55 by livardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (*little == '\0')
		return ((char*)(big));
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = 1;
			while (big[i + j] == little[j] && i + j < len &&
					big[i + j] && little[j])
			{
				j++;
			}
			if (little[j] == '\0')
				return ((char*)(big + i));
		}
		i++;
	}
	return (0);
}
