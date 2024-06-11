/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvmart <salvmart@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:45:19 by salvmart          #+#    #+#             */
/*   Updated: 2024/05/26 18:04:26 by salvmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
