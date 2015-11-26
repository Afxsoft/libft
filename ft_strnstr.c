/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:15:28 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/26 17:40:50 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, int n)
{
	int		i;
	int		y;
	int		p;

	i = 0;
	y = 0;
	if (s2[y] == '\0')
		return ((char*)(s1));
	while (s1[i] && n > 0)
	{
		if (s1[i] != s2[y])
			i++;
		else
		{
			p = n;
			while (s1[i] == s2[y] && s1[i] && s2[y] && n > 0)
			{
				i++;
				y++;
				n--;
			}
			if (s2[y] == '\0')
				return ((char*)s1 + (i - y));
			i = (i - y) + 1;
			y = 0;
			n = p;
		}
		n--;
	}
	return (NULL);
}
