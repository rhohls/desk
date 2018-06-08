/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 08:18:31 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/25 12:57:46 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	char st1[] = "MZIRIBMZIRIBMZE123";
	char st2[] = "MZIRIBMZE";


	
    //printf("st2= %p\n", st2);
	//printf("st1 loc= %p\n", (st1 + 20));
	//printf("ftstrcmp = %i\n", ft_strcmp((st1 + 20),st2));
	//printf("strcmp = %i\n", strcmp((st1+20),st2));
	printf("strcsimple = %i\n", ft_strcmp_simple((st1+9),st2));
	printf("strstr = %s\n", strnstr(st1,st2,9));
	printf("ft_str = %s\n", ft_strnstr(st1,st2,9));

	return (0);
}

