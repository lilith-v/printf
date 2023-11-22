/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 15:51:23 by livardan          #+#    #+#             */
/*   Updated: 2021/01/31 16:40:27 by livardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c;
	int		i;
	int		j;

	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(c = malloc(i)))
		return (0);
	i = 0;
	while (s1[i])
	{
		c[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		c[i + j] = s2[j];
		j++;
	}
	c[i + j] = 0;
	return (c);
}
