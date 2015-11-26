/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:23:45 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/26 16:11:06 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *sa, const char *sb, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	if (ft_strlen(sa) > ft_strlen(sb) && ft_strlen(sa) < n)
		return (1);
	else if (ft_strlen(sa) < ft_strlen(sb) && ft_strlen(sa) < n)
		return (-1);
	s1 = (unsigned char *)sa;
	s2 = (unsigned char *)sb;
	while (s1[i] && i != n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
