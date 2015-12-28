/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 12:16:46 by aouloube          #+#    #+#             */
/*   Updated: 2015/12/28 12:16:49 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*w;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	w = ft_strnew(ft_strlen(s));
	if (w == NULL)
		return (NULL);
	while (s[i])
	{
		w[i] = (*f)(i, s[i]);
		i++;
	}
	return (w);
}
