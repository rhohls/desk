/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 09:16:06 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/29 13:54:39 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int charc, size_t n)
{
	unsigned char	c;
	unsigned char	*dest;
	unsigned char	*sourc;

	dest = (unsigned char*)dst;
	sourc = (unsigned char*)src;
	c = (unsigned char)charc;
	while (n > 0)
	{
		*dest = *sourc;
		if (*sourc == c)
		{
			dest++;
			return (dest);
		}
		n--;
		dest++;
		sourc++;
	}
	return (NULL);
}
