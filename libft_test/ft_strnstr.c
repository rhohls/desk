/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 09:37:20 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/31 10:30:34 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *stringbig, const char *stringsmall, size_t len)
{
	printf("eghn ");
	char *haystack;
	char *needle;
	char *hay_ret;

	haystack = (char *)stringbig;
	hay_ret = haystack;
	needle = (char *)stringsmall;
	printf("dsfewf ");
	printf("\nstrlen |%zu| len|%zu|    \n",ft_strlen((char *)stringsmall), len);  
	printf("res: %i \n", (ft_strlen((char *)stringsmall) < len));
	printf(" iogerjnrto");
	if (!(ft_strlen((char *)stringbig)) || (ft_strlen((char *)stringsmall) > len))
	{
		printf("64yg");	
		return (NULL);
	}
	
	else if (!ft_strlen((char *)stringsmall))
		return ((char *)stringbig);
	else if (ft_strncmp(stringbig, stringsmall, len) == 0)
		return ((char *)stringbig);
	printf("12 i\n");
	while (*haystack && (len >= (size_t)ft_strlen((char *)stringsmall)))
	{
		printf("haysta: %s\n", haystack);
		if (ft_strncmp_simple(haystack, needle, len) == 0)
			return (haystack);
		len--;
		haystack++;
	}
	printf("fff ");
	return (NULL);
}
