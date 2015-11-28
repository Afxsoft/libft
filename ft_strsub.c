/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:06:20 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/28 16:28:36 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s1, unsigned int start, size_t len)
{
	char	*ret;
	int		i;

	ret = ft_strnew(len);
	if (!ret)
		return (NULL);
	i = 0;
	while (len--)
	{
		ret[i] = s1[start];
		i++;
		start++;
	}
	return (ret);
}
