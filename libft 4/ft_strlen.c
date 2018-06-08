/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 16:11:10 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/28 11:50:17 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(char *str)
{
	char	*str_char;
	int		num_char;

	num_char = 0;
	str_char = str;
	while (*str_char++)
		num_char++;
	return (num_char);
}
   
