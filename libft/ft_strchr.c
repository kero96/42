/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvmart <salvmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:33:13 by salvmart          #+#    #+#             */
/*   Updated: 2024/05/04 17:16:53 by salvmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			char_c;

	i = 0;
	char_c = (char) c;
	while (s[i] != '\0')
	{
		if (s[i] == char_c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if (char_c == '\0')
	{
		return ((char *)(s + i));
	}
	return (NULL);
}
