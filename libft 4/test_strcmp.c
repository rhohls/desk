/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 08:18:31 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/25 09:45:59 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	char st1[] = "see F your F return FF now FF";
	char st2[] = "FF";


	//st1 = (st1+20);

	printf("strcmp = %i\n", strcmp((st1+20),st2));
	printf("ft_cmp = %i\n", ft_strcmp((st1+20),st2));

	return (0);
}

