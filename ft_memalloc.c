/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:07:09 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/27 21:45:06 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memalloc(size_t size)
{
	char	*str;
	
	str = (char *)malloc(sizeof(char) * size);
	if(str)
		return (str);
	else
		return (NULL);
}
