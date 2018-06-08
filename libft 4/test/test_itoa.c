/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 09:22:27 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/29 11:51:25 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
//	char s1;
	char *s2;
	int num_numbers;
	int i = 0;
	
	//char **nums = ((char*[20]){"-623", "-1234", "0", ((void *)0)});
	int nums[] = {-623, -1234, 0, 324, 10, 1000};
	num_numbers = 6;
	while (i < num_numbers)
	{
//		s1 = itoa(nums[i]);
		s2 = ft_itoa(nums[i]);
		printf("\nNumber: %i \n",nums[i]);
//		printf("cp atoi: %s \n",s1);
		printf("ft_atoi: %s \n\n",s2);
		i++;
	}

	return(1);
}

