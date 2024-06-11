/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvmart <salvmart@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 18:32:32 by salvmart          #+#    #+#             */
/*   Updated: 2024/05/29 14:18:14 by salvmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (!lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_node = ft_lstnew(NULL);
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_node->content = f(lst->content);
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
