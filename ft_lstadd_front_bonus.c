/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelkabia <eelkabia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:18:36 by eelkabia          #+#    #+#             */
/*   Updated: 2024/11/02 13:31:45 by eelkabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new-> next = *lst;
	*lst = new;
}