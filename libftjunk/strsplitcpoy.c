/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 07:47:45 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/29 07:53:38 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strlen_del(char *str, char c)
{
	int len;
	
	len = 0;
//	printf("strlen %s \n", str);
	while (str[len] != '\0' && str[len] != c)
	{
//		printf("len %i char: %c | ",len, str[len]);
		len++;
	}
	return (len);
}

int ft_num_str(char *str, char c)
{
	int numstr;
	
	numstr = 0;
	while (*str == c)
		str++;
	
	str++;
	while (*str)
	{
		if (*str == c)
		{
			if (*(str - 1) != c)
				numstr++;
		}
		str++;
	}
	return (numstr);
}


char **ft_strsplit(char const *str, char c)
{
	char **str_array;
	int	numstr;
//	char *temp_str;
	int curr_strlen;
	int index;

	int index_array;
	
	index_array = 0;
	index = 0;
	//check * want pointer to string to be edited
	numstr = ft_num_str((char *)str, c);
	str_array = (char **)ft_memalloc(sizeof(char**) * numstr);

	while (str[index] == c)
		index++;
	
	printf("numstr %i \n", numstr);
	while (numstr > 0)
	{
//		printf("index %i  \n", index);
		curr_strlen = ft_strlen_del((char *) &str[index], c);
//		index += curr_strlen;
//		printf("numstr %i | strlen: %i \n", numstr, curr_strlen);
		str_array[index_array] = ft_strsub(str, index, curr_strlen);
//		printf("str @index: %s \n", &str[index] );
//		printf("len str cpy at index %i\n", curr_strlen);
	/*	ft_putstr("\n strarray:");
		ft_putstr(str_array[index_array]);
		ft_putstr("\n");
*/
		//index += curr_strlen;
		index += curr_strlen;
		while (str[index] == c)
			index++;
		numstr--;
		index_array++;
	}
	return (str_array);	
}
