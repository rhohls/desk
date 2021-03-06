/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 07:30:09 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/29 13:20:37 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char const *str, int fd)
{
	if (str == NULL)
		return ;
	while (*str)
	{
		ft_putchar_fd(*str, fd);
		str++;
	}
}
