/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvmart <salvmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:44:11 by salvmart          #+#    #+#             */
/*   Updated: 2024/04/13 18:46:16 by salvmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcounter(char const *str, char c)
{
	int	i;
	int	words;

	if (!str)
		return (0);
	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			words++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (words);
}

static char	**ft_free(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		len;
	int		i;
	int		start;

	i = 0;
	len = ft_wordcounter(s, c);
	str = malloc(sizeof(char *) * (len + 1));
	if (!str || !s)
		return (NULL);
	while (i < len)
	{
		while (*s == c)
			s++;
		start = 0;
		while (s[start] && s[start] != c)
			start++;
		str[i] = ft_substr(s, 0, start);
		if (!str[i])
			return (ft_free(str, i));
		s += start;
		i++;
	}
	str[i] = NULL;
	return (str);
}
