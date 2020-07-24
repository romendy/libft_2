/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmendy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:49:51 by rmendy            #+#    #+#             */
/*   Updated: 2019/12/03 16:34:22 by rmendy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countword(char const *s, char c)
{
	int		i;
	int		a;

	a = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
		a++;
	}
	return (a);
}

char	*ft_strndup(const char *str, char d)
{
	int		c;
	char	*tab;

	c = 0;
	while (str[c] && str[c] != d)
		c++;
	if (!(tab = malloc(sizeof(char) * (c + 1))))
		return (0);
	c = 0;
	while (str[c] && str[c] != d)
	{
		tab[c] = str[c];
		c++;
	}
	tab[c] = '\0';
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		len;
	int		i;
	int		g;

	i = 0;
	g = 0;
	len = ft_countword(s, c);
	if (!s || !(tab = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			if (!(tab[g++] = ft_strndup(s + i, c)))
				return (0);
		while (s[i] && s[i] != c)
			i++;
	}
	tab[g] = 0;
	return (tab);
}
