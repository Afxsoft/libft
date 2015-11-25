/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <aouloube@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:36:57 by aouloube          #+#    #+#             */
/*   Updated: 2014/11/05 13:04:43 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(void const *s1, void const *s2, size_t n)
{
	char	*tmp1;
	char	*tmp2;
	size_t	i;

	tmp1 = (char *)s1;
	tmp2 = (char *)s2;
	i = 0;
	while (tmp1[i] == tmp2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (tmp1[i] - tmp2[i]);
}
