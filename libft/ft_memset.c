/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvmart <salvmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:29:55 by salvmart          #+#    #+#             */
/*   Updated: 2024/04/13 18:30:06 by salvmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *) s;
	while (n-- > 0)
	{
		*a = (unsigned char) c;
		a++;
	}
	return (s);
}
