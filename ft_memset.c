/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:05:50 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/26 16:36:37 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*t;
	int				i;

	t = (unsigned char *)b;
	i = 0;
	while (n)
	{
		t[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (b);
}
