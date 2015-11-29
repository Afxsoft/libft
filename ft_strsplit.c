/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:31:07 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/29 18:25:11 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcount(char const	*s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		i++;
	}
	return (count);
}

int		ft_countc(char const *s, char c)
{
	int i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if	(s[i] == c)
			count++;
		i++;
	}

	return (count);
}


char    *ft_strtrimchar(char const *s, char c)
{
	unsigned int	 start;
	unsigned int	end;
	char			*res;

	if (!s || s[0] == '\0')
		return (ft_strnew(1));
	start = 0;
	while (s[start] == c)
		start++;
	end = ft_strlen(s) - 1;
	while ((s[end] == c) && end > start)
		end--;
	res = ft_strsub(s, start, end - start + 1);
	return (res);
}

int		*ft_strintab(char const *str, char c)
{
	int		i;
	int		y;
	int		*intab;
	int		size;

	i = 0;
	y = 0;
	size = 0;
	intab = (int *)malloc(sizeof(int) * ft_countc(str, c));
	while (str[i])
	{
		if(str[i] == c)
		{
			y++;
			size = 0;
		}
		else
		{
			size++;
			intab[y - 1] = size;
		}
		i++;
	}
	return (intab);
}

char	**ft_malloc2dm(char const *s, char c)
{
	char	*str;
	int		*intab;
	char	**st;
	int		size =  ft_countc(s, c);
	int		i;
	
	str = ft_strtrimchar(s, c);
	intab = ft_strintab(s, c);
	st = (char **)malloc(sizeof(char *) * size + 1);
	i = 0;
	ft_putnbr(size + 1);
	return (NULL);
	while (size + 1)
	{
		st[i] = ft_strnew(intab[i]);
		size--;
		i++;
	}
	return (st);
}

char	 **ft_strsplit(char const *s, char c){
	char	**toto;
	int		size;
	int		i;
	int		y;
	int		x;
	char	*s2;

	s2 = ft_strtrimchar(s, c);
	size = ft_countc(s2, c);
	toto = ft_malloc2dm(s2, c);
	i = 0;
	y = 0;
	x = 0;
	while (s2[i])
	{
		if(s2[i] == c && s2[i + 1] != c)
		{
			y++;
			x = 0;
		}
		else
		{	
			toto[y][x] = s2[i];
			x++;
		}	
		i++;
		
	}
	return (toto);
}



int main(int argc, char **argv)
{
	char	**fap;
	if (argc == 3)
	{
		fap = ft_strsplit("***salut****!**", '*');
		ft_putstr(fap[0]);
	}
	return (0);
}
