/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvmart <salvmart@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 18:43:17 by salvmart          #+#    #+#             */
/*   Updated: 2024/04/13 18:43:30 by salvmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = 0;
	return (str);
}
