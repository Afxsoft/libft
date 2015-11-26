/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:02:55 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/26 16:02:57 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*srce;
	unsigned int	i;

	tmp = (unsigned char *)dest;
	srce = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tmp[i] = srce[i];
		i++;
	}
	return (dest);
}
