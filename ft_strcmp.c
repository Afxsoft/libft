/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:55:38 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/25 17:39:34 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *sa, const char *sb)
{
	size_t	i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *) sa;
	s2 = (unsigned char *) sb;
	while (s1[i])
	{
		if (s1[i + 1] == '\0' && s2[i + 1] != '\0')
			return (-1);
		else if (s2[i + 1] == '\0' && s1[i + 1] != '\0')
			return (1);
		else if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
