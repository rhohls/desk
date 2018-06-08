/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:28:38 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/23 16:35:59 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *stringbig, const char *stringsmall)
{
	char *haystack;
	char *needle;

	haystack = (char *)stringbig;
	needle = (char *)stringsmall;

	if (!ft_strlen((char *)stringbig))
		return (NULL);
	else if (!ft_strlen((char *)stringsmall))
		return ((char *)stringbig);

	while (*haystack)
	{
		haystack = ft_strchr(haystack, needle[0]);
		if (!(*haystack))
			return (NULL);
		if (!(ft_strcmp(haystack, needle)))
			return (haystack);
		haystack++;
	}
	return (NULL);
}

