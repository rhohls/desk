/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 09:37:20 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/25 13:17:13 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** may fail overlap string with len ~ string small
*/
char	*ft_strnstr(const char *stringbig, const char *stringsmall, size_t len)
{
	char *haystack;
	char *needle;
	char *hay_ret;

	haystack = (char *)stringbig;
	hay_ret = haystack;
	needle = (char *)stringsmall;

	if (!ft_strlen((char *)stringsmall))
		return ((char *)stringbig);
	else if (!ft_strlen((char *)stringbig))
		return (NULL);
	if (ft_strncmp(stringbig, stringsmall, len) == 0)
		return ((char *)stringbig);
	while (*haystack && (len > (size_t)ft_strlen((char *)stringsmall)))
	{
		if (ft_strncmp_simple(haystack, needle, len) == 0)
			return (haystack);
		len--;
		haystack++;
	}
	return (NULL);
}
