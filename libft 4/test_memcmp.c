/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:46:48 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/24 15:30:34 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int main()
{
//	char *mine;
//	char *theirs;
	int mine;
	int theirs;

	char t1[] = "\xff\xaa\xde\x12MACOSAAAAA";
	char t2[] = "\xff\xaa\xde\x12";
//	char tst[] = "string with\200inside !";

	size_t size = 4;
	mine = ft_memcmp(t2,t1, size);
	theirs = memcmp(t2,t1, size);

//	printf("string:%s\n",tst);
//	printf("char: \200\n");
	printf("mine: %i\n",mine);
	printf("them: %i\n",theirs);

	return 1;
}
	
