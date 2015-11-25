/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:07:12 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/25 16:07:16 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *srcs, size_t n)
{
	int		i;
	int		y;
	char	*dest;
	const char	*src;

	dest  = (char *) dst;
	src = (const char *) srcs;
	i = ft_strlen(dest);
	y = 0;
	if (n == 0)
	 return (dest);
	while (n)
	{
		dest[i] =  src[y];
		n--;
		i++;
		y++;	
	}
	return (dest);
}
