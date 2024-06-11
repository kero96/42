/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvmart <salvmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:31:11 by salvmart          #+#    #+#             */
/*   Updated: 2024/05/03 17:47:32 by salvmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dst)
	{
		return (dst);
	}
	while (i < n)
	{
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}
