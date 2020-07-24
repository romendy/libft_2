/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 18:05:35 by rmendy            #+#    #+#             */
/*   Updated: 2019/11/28 18:37:45 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	a;

	i = ft_strlen(dest);
	a = -1;
	n++;
	while (n-- && src[++a])
		dest[i + a] = src[a];
	dest[i + a] = '\0';
	return (dest);
}
