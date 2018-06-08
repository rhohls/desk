/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 08:55:43 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/31 10:05:16 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int main()
{
	int test = 3;

	if (test == 1)
	{
		char    buf[11];

		bzero(buf, 11);
		strcpy(buf, "un deux 9");
		buf[9] = '6';
		printf("bad \n");
		printf("\nmine: |%s|\n",ft_strnstr(buf, "6", 10));
		printf("thiers: |%s|",strnstr(buf, "6", 10));
	}
	else if (test == 2)
	{
		char    buf2[] = "ozarabozaraboze123";
		printf("\nmine: |%s|\n",ft_strnstr(buf2, "ozaraboze", 15));
		printf("thiers: |%s|",	strnstr(buf2,"ozaraboze", 15));
	}
	else if (test == 3)
	{
		char *str = "Hello les genw";
		printf("\nmine: |%s|\n",ft_strnstr(str, "Hello", 3));
		printf("thiers: |%s|",	strnstr(str, "Hello", 3));
	}



	return (0);
}

