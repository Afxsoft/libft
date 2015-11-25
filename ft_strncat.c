/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:40:09 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/25 12:23:15 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncat(char *dest, const char *src, size_t n)
{
	int		i;
	int		size;

	size = ft_strlen(dest);
	i = 0;
	while (src[i] && n != 0)
	{
		dest[size + i] = src[i];
		i++;
		n--;
	}
	dest[size + i] = '\0';
	return (dest);
}
