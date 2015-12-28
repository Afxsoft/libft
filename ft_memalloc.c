/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 12:14:50 by aouloube          #+#    #+#             */
/*   Updated: 2015/12/28 12:14:52 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int *m;

	if (size == 0)
		return (NULL);
	m = malloc(size);
	if (m == NULL)
		return (NULL);
	ft_memset(m, 0, size);
	return (m);
}
