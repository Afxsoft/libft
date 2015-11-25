/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:07:30 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/25 15:51:48 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *) dst;
	src = (char *) src;
	if (n)
		return(dst);
	while (dest[i])
	{
		if (dest[i] == c)
		{
			if(dest[i + 1])
				return ((void *) dest);
			else if (dest[i + 1] == '\0')
				return (NULL);
		}
	}
	return (dst);
}
