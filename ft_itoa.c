/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:34:52 by aouloube          #+#    #+#             */
/*   Updated: 2015/12/01 20:09:12 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_maxnegint(int i)
{
	if (i == -2147483648)
		return (1);
	else
		return (0);
}

static int		ft_itoa_size(int n)
{
	int		i;

	i = 0;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		r;
	int		i;
	int		t;

	if (n == 0)
		return ("0");
	if (ft_maxnegint(n))
		return ("-2147483648");
	r = (n < 0) ? 0 : 1;
	n = (n < 0) ? n * -1 : n;
	i = ft_itoa_size(n);
	t = n;
	str = ft_memalloc(i);
	while (t)
	{
		str[i - r] = (t % 10) + 48;
		i--;
		t /= 10;
	}
	if (!r)
		str[0] = '-';
	return (str);
}
