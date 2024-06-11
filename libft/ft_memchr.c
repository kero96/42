/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvmart <salvmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:34:06 by salvmart          #+#    #+#             */
/*   Updated: 2024/04/13 18:34:08 by salvmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*str;
	unsigned char		char_c;

	str = (unsigned char *)s;
	char_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == char_c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
