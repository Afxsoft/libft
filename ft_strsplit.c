/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:31:07 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/30 18:54:44 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countword(char const *s, char c)
{
	int		i;
	int		res;

	res = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			res++;
		}
		if (s[i] == c)
			i++;
	}
	return (res);
}

int		ft_intab(char const *s, char c, int *z)
{
	int		i;

	i = 0;
	if (s[*z] == c)
	{
		while (s[*z] == c)
			(*z)++;
	}
	while (s[*z] != c && s[*z])
	{
		i++;
		(*z)++;
	}
	return (i);
}

char	**ft_malloc2dm(char **tmp, char const *s, char c)
{
	int		i;
	int		u;
	int		z;

	i = 0;
	u = 0;
	z = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
			{
				tmp[u][z] = s[i];
				i++;
				z++;
			}
			z = 0;
			u++;
		}
		if (s[i] == c)
			i++;
	}
	tmp[u] = 0;
	return (tmp);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**toto;
	int		i;
	int		x;
	int		y;

	x = 0;
	y = 0;
	if (!s)
		return (NULL);
	i = ft_countword(s, c);
	toto = (char **)malloc(sizeof(char*) * (i + 1));
	if (!toto)
		return (NULL);
	while (i > x)
	{
		toto[x] = (char *)malloc(sizeof(char) * (ft_intab(s, c, &y) + 1));
		x++;
	}
	return (ft_malloc2dm(toto, s, c));
}
