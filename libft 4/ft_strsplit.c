/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 07:47:45 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/29 08:36:02 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strlen_del(char *str, char c)
{
	int len;
	
	len = 0;
	while (str[len] != '\0' && str[len] != c)
	{
		len++;
	}
	return (len);
}

int ft_num_str(char *str, char c)
{
	int numstr;
	int i;

	i = 0;
	numstr = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] != c &&	(str[i+1] == c || str[i+1] == '\0'))
		{
			numstr++;
		}
		i++;
	}
	return (numstr);
}

char **ft_strsplit(char const *str, char c)
{
	char **str_array;
	int	numstr;
	int curr_strlen;
	int index;
	int index_array;
	
	index_array = 0;
	index = 0;
	if(!str)
		return (NULL);	
	numstr = ft_num_str((char *)str, c);
	if(!(str_array = (char **)ft_memalloc(sizeof(char**) * numstr)))
		return (NULL);

	while (str[index] == c)
		index++;
	
	while (numstr > 0)
	{
		curr_strlen = ft_strlen_del((char *) &str[index], c);
		str_array[index_array] = ft_strsub(str, index, curr_strlen);
		index += curr_strlen;
		while (str[index] == c)
			index++;
		numstr--;
		index_array++;
	}
	return (str_array);	
}
