/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvmart <salvmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:33:29 by salvmart          #+#    #+#             */
/*   Updated: 2024/05/04 19:20:34 by salvmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			char_c;
	char			*occurr;

	i = 0;
	char_c = (char) c;
	occurr = NULL;
	while (s[i])
	{
		if (s[i] == char_c)
		{
			occurr = (char *)(s + i);
		}
		i++;
	}
	if (char_c == '\0')
	{
		return ((char *)(s + i));
	}
	return (occurr);
}
