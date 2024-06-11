/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvmart <salvmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:49:27 by salvmart          #+#    #+#             */
/*   Updated: 2024/04/13 18:49:48 by salvmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_n(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	if (n == 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	long_n;

	long_n = (long)n;
	len = len_n(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (long_n < 0)
	{
		str[0] = '-';
		long_n = -long_n;
	}
	while (len-- > 0)
	{
		if (str[len] != '-')
		{
			str[len] = (long_n % 10) + '0';
			long_n /= 10;
		}
	}
	return (str);
}
