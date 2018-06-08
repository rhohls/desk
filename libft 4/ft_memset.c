/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 14:56:38 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/24 13:03:17 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	char *b;

	b = (char *)str;
	while (len > 0)
	{
		*b = (unsigned char)c;
		len--;
		b++;
	}
	return (str);
}
