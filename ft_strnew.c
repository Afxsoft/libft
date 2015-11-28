/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnews.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:15:38 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/28 13:11:54 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char			*res;
	unsigned int	i;

	res = (char *)malloc(sizeof(char) * size + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < size + 1)
	{
		res[i] = '\0';
		i++;
	}
	return (res);
}
