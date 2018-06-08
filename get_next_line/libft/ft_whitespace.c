/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whitespace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 14:15:27 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/29 15:18:58 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
		c == '\r' || c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}
