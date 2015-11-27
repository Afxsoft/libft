/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouloube <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:20:32 by aouloube          #+#    #+#             */
/*   Updated: 2015/11/27 21:48:42 by aouloube         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
		int		i;
			int		u;
				char	*tmp;

					u = 0;
						i = 0;
							if (!s1 || !s2)
										return (NULL);
								tmp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
									if (!tmp)
												return (NULL);
										while (s1[u] != '\0')
												{
															tmp[u] = s1[u];
																	u++;
																		}
											while (s2[i] != '\0')
													{
																tmp[u] = s2[i];
																		u++;
																				i++;
																					}
												tmp[u] = '\0';
													return (tmp);
}
