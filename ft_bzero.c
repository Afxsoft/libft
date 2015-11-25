/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:11:06 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/25 12:55:36 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *t, size_t n)
{
	int		i;
	char	*s;

	i = 0;
	s = (char *) t;
	if(n != 0)
	{
		while (n)
		{
			s[i] = '\0';
			n--;
			i++;
		}
	}
}
