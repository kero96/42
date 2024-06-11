/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvmart <salvmart@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 18:11:47 by salvmart          #+#    #+#             */
/*   Updated: 2024/05/26 18:24:51 by salvmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*l_aux;

	l_aux = lst;
	while (l_aux)
	{
		(*f)(l_aux->content);
		l_aux = l_aux->next;
	}
}
