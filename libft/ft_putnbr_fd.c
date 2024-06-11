/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvmart <salvmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 19:17:30 by salvmart          #+#    #+#             */
/*   Updated: 2024/04/13 19:18:07 by salvmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = (n * -1);
		ft_putnbr_fd(n, fd);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd((n / 10), fd);
			ft_putnbr_fd((n % 10), fd);
		}
		else
		{
			ft_putchar_fd((n + '0'), fd);
		}
	}
}
