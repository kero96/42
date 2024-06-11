/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvmart <salvmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:34:31 by salvmart          #+#    #+#             */
/*   Updated: 2024/04/13 18:34:34 by salvmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (haystack[i] && (i + needle_len <= len))
	{
		if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
