/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 10:00:46 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/29 10:49:36 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_power(int base, int power)
{
	if (power == 0)
		return (1);
	while (power > 1)
	{
		base *= base;
		power--;
	}
	return (base);
}