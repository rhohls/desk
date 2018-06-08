/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 13:36:18 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/21 15:41:25 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char str1[] = "This is the source string";
	char str2[50] = "";
	char *pt;
	
	pt = (char*)ft_memcpy(str2, str1, strlen(str1));

	printf("fun: %s \n",pt);
		
	printf("string:\n%s", str2);

	return (0);
}

