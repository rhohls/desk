/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 12:03:59 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/22 09:42:24 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int i, size_t n)
{
	char	*str;
	int		cnt;

	cnt = 0;
	str = (char*)s;
	while (cnt < n)
	{
		if (*str == (unsigned char)i)
			return (str);
		cnt++;
		str++;
	}
	return (NULL);
}
