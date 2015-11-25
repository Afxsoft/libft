/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <aouloube@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:52:20 by aouloube          #+#    #+#             */
/*   Updated: 2014/11/03 13:52:49 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*srce;
	unsigned int	i;

	tmp = (unsigned char *)dest;
	srce = (unsigned char *)src;
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
