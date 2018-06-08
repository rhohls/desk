/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:52:53 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/28 16:52:54 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int num)
{
	int num_dig;
	
	num_dig = ft_int_len(num);	
	if (num < 0)
	{
		ft_putchar('-');
		num *= (-1);
	}
	while (num_dig)
	{
		ft_putchar((num / (ft_power(10, num_dig))) + '0');
		num_dig--;
	}
}
