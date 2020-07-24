/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:25:39 by rmendy            #+#    #+#             */
/*   Updated: 2019/11/28 20:26:35 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		searchfirstset(char c, char const *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		i;
	size_t		a;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		if (searchfirstset(s1[i], set) == 1)
			i++;
		else
			break ;
	}
	a = ft_strlen(s1);
	while (searchfirstset(s1[a - 1], set) == 1 && a != i && a != '\0')
		a--;
	str = ft_substr(s1, i, (a - i));
	return (str);
}
