/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 08:40:15 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/22 07:58:12 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *sourc, size_t n)
{
	char *dest;
	char *src;

	src = (char *)sourc;
	dest = (char *)dst;
	while (n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	return (dst);
}
