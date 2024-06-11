/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvmart <salvmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:35:08 by salvmart          #+#    #+#             */
/*   Updated: 2024/04/13 18:35:16 by salvmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	num;

	result = 0;
	sign = 1;
	num = 0;
	while (str[num] == ' ' || str[num] == '\t' || str[num] == '\r'
		|| str[num] == '\n' || str[num] == '\v' || str[num] == '\f')
		num++;
	if (str[num] == '-')
	{
		sign = sign * -1;
		num++;
	}
	else if (str[num] == '+')
		num++;
	while (str[num] && str[num] >= 48 && str[num] <= 57)
	{
		result = result * 10 + str[num] - '0';
		num++;
	}
	result *= sign;
	return (result);
}
