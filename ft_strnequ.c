/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:01:11 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/27 16:43:59 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		value;

	value  = ft_strncmp(s1, s2, n);
	if(value == 0)
		return (1);
	else
		return (0);
}
