/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:39:00 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/26 16:58:03 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cur;

	cur = (unsigned char *)s;
	while (n--)
	{
		if (*cur == (unsigned char)c)
			return ((unsigned char *)cur);
		cur++;
	}
	return (NULL);
}
