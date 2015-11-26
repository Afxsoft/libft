/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:30:52 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/26 15:34:09 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*desti;
	unsigned char	*srce;
	unsigned int	i;
	unsigned char	*tmp;

	desti = (unsigned char *)dest;
	srce = (unsigned char *)src;
	i = 0;
	tmp = (unsigned char *)malloc(sizeof(unsigned char) * n);
	while (n > i)
	{
		tmp[i] = srce[i];
		i++;
	}
	i = 0;
	while (n > i)
	{
		desti[i] = tmp[i];
		i++;
	}
	return (dest);
}
