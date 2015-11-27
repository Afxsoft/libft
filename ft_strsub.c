/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:06:20 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/27 21:52:10 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s1, unsigned int start, size_t len)
{
		size_t	slen;
			char	*p_s1;
				char	*p_ret;
					char	*ret;

						slen = ft_strlen(s1);
							if (((start + len) > slen))
										return (NULL);
								ret = ft_strnew(len);
									if (!ret)
												return (NULL);
										p_s1 = (char *)(s1 + start);
											p_ret = ret;
												while (len--)
															*(p_ret++) = *(p_s1++);
													*p_ret = '\0';
														return (p_ret);
}
