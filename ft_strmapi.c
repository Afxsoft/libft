/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:36:11 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/28 13:33:08 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*w;

	i = 0;
	w = ft_strnew(ft_strlen(s));
	while (s[i])
	{
		w[i] = (*f)(i, s[i]);
		i++;
	}
	return (w);
}
