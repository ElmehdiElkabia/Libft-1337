/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelkabia <eelkabia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:51:09 by eelkabia          #+#    #+#             */
/*   Updated: 2024/11/01 13:33:35 by eelkabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_int(int n)
{
	size_t	r;

	r = 0;
	if (n <= 0)
		r = 1;
	while (n != 0)
	{
		r++;
		n = n / 10;
	}
	return (r);
}

static char	*int_dup(char	*str, int n, size_t len)
{
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	while (n > 0)
	{
		str[len--] = ((n % 10) + '0');
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		i;
	size_t		len;

	i = 0;
	len = len_int(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n == -2147483648)
	{
		free(str);
		return (ft_strdup("-2147483648"));
	}
	str[len--] = '\0';
	return (int_dup(str, n, len));
}
