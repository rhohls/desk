/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 08:09:40 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/31 14:48:20 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_strlen_del(char *str, char c)
{
	int len;

	len = 0;
	while (str[len] != '\0' && str[len] != c)
	{
		len++;
	}
	if (len == 0)
		len++;
	return (len);
}

static int	ft_num_str(char *str, char c)
{
	int numstr;
	int i;

	i = 0;
	numstr = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			numstr++;
		i++;
	}
	if (numstr == 0)
		numstr++;
	return (numstr);
}

char		**ft_strsplit(char const *str, char c)
{
	char	**str_array;
	int		numstr;
	int		curr_strlen;
	int		index;
	int		index_array;

	index_array = 0;
	index = 0;
	if (!str)
		return (NULL);
	numstr = ft_num_str((char *)str, c);
	if (!(str_array = (char **)ft_memalloc(sizeof(char**) * numstr)))
		return (NULL);
//	if (!str)
//		return (str_array);
	while (str[index] == c)
		index++;
	while (numstr-- > 0)
	{
		curr_strlen = ft_strlen_del((char *)(&str[index]), c);
		str_array[index_array] = ft_strsub(str, index, curr_strlen);
		index += curr_strlen;
		while (str[index] == c)
			index++;
		index_array++;
	}
	return (str_array);
}
