/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 17:07:51 by aouloube          #+#    #+#             */
/*   Updated: 2015/12/01 18:48:45 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*toto;
	t_list	*tmp;

	if (alst && *alst)
	{
		toto = *alst;
		while (toto)
		{
			tmp = toto->next;
			(del)(toto->content, toto->content_size);
			free(toto);
			toto = tmp;
		}
		*alst = NULL;
	}
}
