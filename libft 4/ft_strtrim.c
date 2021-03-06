/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 07:35:22 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/29 13:15:58 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char * ft_strtrim(char const *str)
{
	char *new_str;
	char *work_str;
	int	begin_w;
	int end_w;
	
	if (str == NULL)
		return (NULL);
	begin_w = 0;
	end_w = 0;
	work_str = (char *)str;
	while (ft_whitespace(*work_str))
	{
		begin_w++;
		work_str++;
		if (*work_str == '\0')
			return (ft_strnew(begin_w));
	}
	work_str = (char *)(str + ft_strlen((char *)str) - 1);
	while (ft_whitespace(*work_str))
	{
		end_w++;
		work_str--;
	}
	if (begin_w == 0 && end_w == 0)
		return ((char *)str);
	if (!(new_str =  ft_strnew(ft_strlen((char *)str) - begin_w - end_w)))
			return (NULL);
	
	work_str = (char *)(str + begin_w);
	//strsub
	ft_strncpy(new_str, work_str, ft_strlen((char *)str) - begin_w - end_w);

	return (new_str);
}
/*
char	*ft_strtrim(char const *str)
{
	char *new_str
	if (!(new_str = ft_strnew(



*/
