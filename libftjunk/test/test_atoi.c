/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:28:06 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/31 08:05:39 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i1;
	int i2;
	int num_numbers;
	int i = 0;
	
	char **nums = ((char*[20]){"-623", "-1234", "0", "99999999999999999999",
			"-99999999999999999999","000-567567", "00000234234", "123a23",
			"++1235", "asfd123445", "123123sad", "+++++1234", "+123",
		   	"1234567890123455",  "1234567890123456", "1234567890123457",
			"2147483646",
			((void *)0)});

	num_numbers = 17;
	while (i < num_numbers)
	{
		i1 = atoi(nums[i]);
		i2 = ft_atoi(nums[i]);
		printf("\nNumber: %s \n",nums[i]);
		printf("cp atoi: %i \n",i1);
		printf("ft_atoi: %i \n",i2);
		i++;
	}

	return(1);
}
