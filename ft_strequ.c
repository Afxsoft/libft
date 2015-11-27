/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:38:40 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/27 16:45:27 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strequ(char const *s1, char const *s2)
{
	int		value;

	value = ft_strcmp(s1, s2);
	if (value == 0)
		return (1);
	else
		return (0);
}
