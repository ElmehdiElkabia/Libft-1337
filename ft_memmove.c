/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelkabia <eelkabia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:07:30 by eelkabia          #+#    #+#             */
/*   Updated: 2024/10/30 12:41:01 by eelkabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if ((unsigned char *)dst == (unsigned char *)src)
		return ((unsigned char *)dst);
	if ((unsigned char *)dst < (unsigned char *)src)
	{
		while (i < len)
		{
			(unsigned char *)dst[i] = (unsigned char *)src[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i < len)
		{
			(unsigned char *)dst[i - 1] = (unsigned char *)src[i - 1];
			i--;
		}
	}
	return (dst);
}
