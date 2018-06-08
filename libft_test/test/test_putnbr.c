/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 08:13:24 by rhohls            #+#    #+#             */
/*   Updated: 2018/06/01 08:35:54 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int main()
{
	int i = 0;
	int nums[] = {-623, -1234, 0, 324, 10, 1000};
	int num_numbers = 6;

	while (i < num_numbers)
	{
		printf("\nNumber: %i \n",nums[i]);
		ft_putnbr(nums[i]);
		i++;
	}

	return(1);
}
