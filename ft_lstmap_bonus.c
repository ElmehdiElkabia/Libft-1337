/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelkabia <eelkabia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:52:35 by eelkabia          #+#    #+#             */
/*   Updated: 2024/11/03 17:05:40 by eelkabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;
	t_list	*temp;

	temp = *lst;
	if (!lst || !f || !del)
		return (NULL);
	while (temp)
	{
		node = ft_lstnew(f(temp->content));
		if (!node)
		{
			ft_lstclear(&node, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
        temp = temp->next;
	}
	return (list);
}