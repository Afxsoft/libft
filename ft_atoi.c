/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:39:18 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/25 18:47:23 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		x;
	int		p;
	int		s;
	
	x = 0;
	p = 1;
	s = ft_strlen(str) - 1;
	while (s >= 0)
	{
			if (ft_isdigit(str[s]))
				x += (str[s] - 48) * p;
			else
			{
				if (s == 0 && (str[s] == '-' || str[s] == '+'))
				{	
					if (str[s] == '-')
						x *= -1;
					else if (str[s] == '+')
						x *= 1;
				}
				else
					return (0);
			}
			p *= 10;
		s--;
	}
	return (x);
}
