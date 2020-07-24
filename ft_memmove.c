/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:15:16 by rmendy            #+#    #+#             */
/*   Updated: 2019/11/06 03:26:21 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*tmp;
	char		*tmp1;
	int			i;

	tmp = (const char *)src;
	tmp1 = (char *)dst;
	i = -1;
	if (!dst && !src)
		return (NULL);
	if (len == 0)
		return (tmp1);
	if (tmp1 < tmp)
	{
		while (++i < (int)len)
		{
			tmp1[i] = tmp[i];
		}
	}
	else
	{
		while (++i < (int)len)
			tmp1[(len - 1) - i] = tmp[(len - 1) - i];
	}
	return (dst);
}
