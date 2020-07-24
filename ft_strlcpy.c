/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 04:00:37 by rmendy            #+#    #+#             */
/*   Updated: 2019/11/28 20:29:36 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		a;

	i = -1;
	a = 0;
	if (!dst || !src)
		return (0);
	while (src[a])
		a++;
	if (!dstsize)
		return (a);
	while (src[++i] && i < dstsize)
		dst[i] = src[i];
	if (dstsize < a)
		dst[dstsize - 1] = '\0';
	else if (dstsize != 0)
		dst[i] = '\0';
	return (a);
}
