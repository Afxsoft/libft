/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:15:28 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/28 15:42:39 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, int n)
{
	int		i;
	int		y;

	i = 0;
	if (s2[0] == '\0')
		return ((char*)(s1));
	while (s1[i] && n > 0)
	{
		y = 0;
		if (s1[i] == s2[y])
		{
			while (s1[i] == s2[y] && s1[i] && s2[y] && y < n)
			{
				i++;
				y++;
			}
			if (s2[y] == '\0')
				return ((char*)s1 + (i - y));
			i = (i - y) + 1;
		}
		i++;
		n--;
	}
	return (NULL);
}
