/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvmart <salvmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:31:38 by salvmart          #+#    #+#             */
/*   Updated: 2024/05/03 17:51:45 by salvmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*temp_src;
	unsigned char		*temp_dst;

	temp_dst = (unsigned char *) dst;
	temp_src = (unsigned char *) src;
	if (!dst && !src)
		return (0);
	if (dst <= src)
		ft_memcpy(dst, src, len);
	else if (dst > src)
	{
		while (len > 0)
		{
			len--;
			temp_dst[len] = temp_src[len];
		}
	}
	return (dst);
}
