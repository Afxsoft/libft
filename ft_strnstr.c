/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:06:53 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/25 12:24:49 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *s1, char *s2, int n)
{
	int		i;
	int		y;
	int		checker;
	int		pos;
	char	*s3;

	i = 0;
	checker = 1;
	if (!s2[i])
		return (s1);
	else
	{
		while(s1[i])
		{
			y = 0;
			if (s1[i] == s2[y] )
			{
				while (s2[y])
				{
					if(s1[i] != s2[y])
					{
						checker = 0;
					}
					else
					{
						if (y == 0)
							pos = i;
						i++;
					}
					y++;
				}
				if (checker == 1)
				{
					s3 = (char *) malloc (sizeof(char) * (ft_strlen(s1) - pos) + 1 );
					y = 0;
					while(s1[pos] && y != n)
					{
						s3[y] = s1[pos];
						y++;
						pos++;
					}
					ft_putstr(s3);
					return (s3);
				}
			}
			i++;
		}
	}
	return (NULL);
}
