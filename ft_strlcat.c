/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:04:43 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/28 13:17:16 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	int		n;
	size_t	i;
	int		a;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
	{
		if (i == size)
			return (size + ft_strlen(src));
		i++;
	}
	a = i;
	while (src[n] != '\0' && i < (size - 1))
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	n = 0;
	while (src[n] != '\0')
		n++;
	dest[i] = '\0';
	return (a + n);
}
