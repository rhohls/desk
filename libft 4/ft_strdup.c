/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 07:53:54 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/29 13:41:19 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strdup(char *str)
{
	int		len;
	char	*new_str;

	len = ft_strlen(str);
	if (!(new_str = (char *)ft_memalloc((len + 1) * sizeof(char))))
		return (NULL);
	ft_strcpy(new_str, str);
	return (new_str);
}
