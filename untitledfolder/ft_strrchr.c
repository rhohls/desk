/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:22:37 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/23 16:39:09 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *string;

	string = (char *)string;
	string += ft_strlen((char *)str);
	while (*string)
	{
		if (*string == (char)c)
			return ((char *)str);
		string--;
	}
	if (*string == (char)c)
            return ((char *)str);
	return (NULL);
}
