/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 11:20:16 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/27 15:34:13 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_strclr(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
}
