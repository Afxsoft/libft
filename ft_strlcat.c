/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:04:43 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/26 18:12:48 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
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
	if (ft_strlen(dest) < n)
		return (ft_strlen(src) - n);
	else
		return (ft_strlen(dest) - ft_strlen(src));
}
