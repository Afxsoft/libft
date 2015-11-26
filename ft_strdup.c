/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:13:15 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/26 16:15:40 by aouloube         ###   ########.fr       */
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
	i = 0;
	while (str[i])
	{
		mstr[i] = str[i];
		i++;
	}
	mstr[i] = '\0';
	return (mstr);
}
