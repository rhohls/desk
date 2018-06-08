/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testatoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:59:54 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/22 10:45:11 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main()
{
	char st1[] = "-";
	char st2[] = "-123";
	char st3[] = "1b23";
	
	printf("atoi t1: %i - %i \n", atoi(st1),ft_atoi(st1));
	printf("atoi t2: %i - %i \n", atoi(st2),ft_atoi(st2));
	printf("atoi t3: %i - %i \n", atoi(st3), ft_atoi(st3));


	return (1);
}
	

