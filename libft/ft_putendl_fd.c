/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvmart <salvmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 19:17:00 by salvmart          #+#    #+#             */
/*   Updated: 2024/04/13 19:17:10 by salvmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
