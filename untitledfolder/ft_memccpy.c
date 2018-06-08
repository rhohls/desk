/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 09:16:06 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/21 15:06:40 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int charc, size_t n)
{
	char c;
	char *dest;
	char *sourc;

	dest = (char*)dst;
	sourc = (char*)src;
	c = (char)charc;
	while (n > 0)
	{
		if (*sourc == c)
		{
			*dest++ = *sourc++;
			return (dst);
		}
		*dest++ = *sourc++;
		n--;
	}
	return (NULL);
}
