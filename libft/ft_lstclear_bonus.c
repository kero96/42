/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvmart <salvmart@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 18:04:42 by salvmart          #+#    #+#             */
/*   Updated: 2024/05/29 13:58:03 by salvmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l_aux;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		l_aux = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = l_aux;
	}
}
