/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 10:33:42 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/23 13:36:36 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "";
	char str2[] = "123";
	char *strr;
	int i;
	
	printf("str1:%s \n",str1);
	strr = strstr(str1,str2);
	if (!(strr))
		printf("strstr:%s|done", strr);
	return (1);
}

