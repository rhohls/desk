/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:22:37 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/23 09:27:45 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	str += ft_strlen(str)
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		str--;
	}
	if (*str == (char)c)
            return (str);
	return (NULL);
}
