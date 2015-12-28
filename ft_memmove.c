/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 12:17:36 by aouloube          #+#    #+#             */
/*   Updated: 2015/12/28 12:17:39 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*str;
	const char	*srcc;

	str = (char *)dst;
	srcc = (const char *)src;
	if (srcc <= str)
	{
		str += len - 1;
		srcc += len - 1;
		while (len--)
		{
			*str-- = *srcc--;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
