/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 07:53:54 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/22 08:00:13 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		len;
	char	*new_str;

	len = ft_strlen(str);
	new_str = (char *)malloc(len * sizeof(char));
	ft_strcpy(new_str, str);
	return (new_str);
}
