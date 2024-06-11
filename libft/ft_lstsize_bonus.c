/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvmart <salvmart@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:49:10 by salvmart          #+#    #+#             */
/*   Updated: 2024/05/29 13:58:10 by salvmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
