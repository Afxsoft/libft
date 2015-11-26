/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:09:38 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/26 17:16:35 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		y;

	i = 0;
	y = 0;
	if (s2[y] == '\0')
		return ((char*)(s1));
	while (s1[i])
	{
		if (s1[i] != s2[y])
			i++;
		else
		{
			while (s1[i] == s2[y] && s1[i] != '\0' && s2[y] != '\0')
			{
				i++;
				y++;
			}
			if (s2[y] == '\0')
				return ((char*)s1 + (i - y));
			i = (i - y) + 1;
			y = 0;
		}
	}
	return (NULL);
}
