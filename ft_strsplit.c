/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 12:17:11 by aouloube          #+#    #+#             */
/*   Updated: 2015/12/28 12:17:13 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordlen(char *s, char c, int n)
{
	int i;

	i = 0;
	while (s[i + n] != c && s[i + n] != '\0')
		i++;
	return (i);
}

static int	ft_nbrword(char const *s, char c)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && k == 0)
		{
			j++;
			k++;
		}
		else if (s[i] == c && k > 0)
			k--;
		i++;
	}
	return (j);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		wordlen;
	int		nbword;
	char	**str;

	i = 0;
	j = 0;
	nbword = ft_nbrword(s, c);
	str = (char **)malloc(sizeof(char *) * (nbword + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0' && nbword)
	{
		if (s[i] != c)
		{
			wordlen = ft_wordlen((char *)s, c, i);
			str[j++] = ft_strsub(s, i, wordlen);
			i = i + wordlen;
			nbword--;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
