/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 12:16:16 by aouloube          #+#    #+#             */
/*   Updated: 2015/12/28 12:16:18 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*mstr;
	int		size;
	int		i;

	size = ft_strlen(str);
	mstr = (char *)malloc(sizeof(char) * size + 1);
	if (!mstr)
		return (NULL);
	i = 0;
	while (str[i])
	{
		mstr[i] = str[i];
		i++;
	}
	mstr[i] = '\0';
	return (mstr);
}
