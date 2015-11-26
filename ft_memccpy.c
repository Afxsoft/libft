/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:35:54 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/26 15:37:18 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*tmp;
	char	*srce;
	size_t	i;

	tmp = (char *)dest;
	srce = (char *)src;
	i = 0;
	while (i < n && srce[i] != c)
	{
		tmp[i] = srce[i];
		i++;
	}
	if (srce[i] == c)
	{
		tmp[i] = c;
		i++;
		return (dest + i);
	}
	return (0);
}
