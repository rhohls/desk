/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 07:30:47 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/29 10:57:38 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_itoa(int num)
{
	char *str_new;
	int neg;
	int num_dig;
	
	num_dig = ft_int_len_neg(num, &neg);
//		return (NULL);
//	printf("num dig %i \n", num_dig);
	if (!(str_new = ft_strnew(num_dig + 1)))
		return (NULL);
	if (neg)
	{
		*str_new = '-';
		str_new++;
		num *= (-1);
	}
	while (num_dig)
	{

		printf("digit:|%i|  ",((num / (ft_power(10, num_dig - 1)))));
		printf("num: %i | ftpower: %i \n", num_dig, ft_power(10, num_dig - 1));
	//	ft_putchar((num / (ft_power(10, num_dig - 1))) + '0');
		*str_new = ((num / (ft_power(10, num_dig - 1))) + '0');
		num_dig--;
		str_new++;
		num = num % ft_power(10, num_dig - 2);
	}
	return (str_new);
}
