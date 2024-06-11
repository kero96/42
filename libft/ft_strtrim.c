/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvmart <salvmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:43:47 by salvmart          #+#    #+#             */
/*   Updated: 2024/04/13 18:43:53 by salvmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	len_start;
	unsigned int	len_end;

	len_end = ft_strlen(s1);
	len_start = 0;
	while (s1[len_start] && ft_strchr(set, s1[len_start]))
		len_start++;
	while (len_end > len_start && ft_strchr(set, s1[len_end - 1]))
		len_end--;
	str = ft_substr(s1, len_start, len_end - len_start);
	return (str);
}
