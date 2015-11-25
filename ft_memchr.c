/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <aouloube@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:43:34 by aouloube          #+#    #+#             */
/*   Updated: 2014/11/05 13:13:04 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cur;

	cur = (unsigned char *)s;
	while (n--)
	{
		if (*cur == c)
			return (cur);
		if (n)
			cur++;
	}
	return (NULL);
}
