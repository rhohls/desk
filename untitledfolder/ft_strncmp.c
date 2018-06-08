/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 08:44:44 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/23 08:51:44 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strcmp(const char *str1, const char *str2, size_t n)
{
	while (*str1 && n)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		if (!(*str2))
			return (*str1 - *str2);
		str1++;
		str2++;
		n--;
	}
	return (*str1 - *str2);
}
