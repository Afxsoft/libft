/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 13:19:59 by aouloube          #+#    #+#             */
/*   Updated: 2015/12/01 19:35:51 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newl;

	newl = (t_list *)malloc(sizeof(t_list));
	if (!newl)
		return (NULL);
	if (content == NULL)
		newl->content = NULL;
	else
	{
		newl->content = malloc(sizeof(content));
		if (!newl->content)
			return (NULL);
		ft_memmove(newl->content, content, content_size);
	}
	newl->content_size = (content != NULL) ? content_size : 0;
	newl->next = NULL;
	return (newl);
}
