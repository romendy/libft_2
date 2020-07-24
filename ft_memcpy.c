/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 10:13:59 by rmendy            #+#    #+#             */
/*   Updated: 2019/11/06 05:05:56 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	i = -1;
	d = (char *)dst;
	s = (char *)src;
	if ((dst == NULL) && (src == NULL))
		return (NULL);
	while (++i < n)
		d[i] = s[i];
	return (d);
}
