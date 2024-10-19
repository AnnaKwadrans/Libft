/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list2_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akwadran <akwadran@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:12:56 by akwadran          #+#    #+#             */
/*   Updated: 2024/10/16 22:54:18 by akwadran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	while (*lst != NULL)
	{
		ft_lstdelone(*lst, del);
		*lst = (*lst)->next;
	}
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst);
		lst = lst->next;
	}
}
/*
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*aux;
	t_list	*new_aux;

	aux = lst;
	new_aux = new_lst;
	while (aux != NULL)
	{
		new_lst = ft_lstnew(lst->content);
		(f(new_lst));
		aux = aux->next;
		new_lst = new_lst->next;
	}
	new_lst->next = NULL;
	return (new_aux);
}
*/