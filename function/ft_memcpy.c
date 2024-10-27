/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelkabia <eelkabia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:00:44 by eelkabia          #+#    #+#             */
/*   Updated: 2024/10/27 14:13:47 by eelkabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!d || !c)
		return (d);
	while (i < n)
	{
		(unsigned char *)dest[i] = (unsigned char *)src[i];
		i++;
	}
	(unsigned char *)dest[i] = '\0';
	return ((unsigned char *)dest);
}
