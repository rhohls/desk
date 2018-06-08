/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmemchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:39:50 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/22 08:41:16 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
void test_memchr(void)
{
    char *s1 = "";
    char *s2 = "abcdefabcdef";
    char *s3 = "11111111111111111111";

    printf("Testing memchr():\nTest1...");
    if (ft_memchr(s1, 'x', 0) == NULL)
        printf("passed.");
    else    printf("FAILED.");
    printf("\nTest2...");
    if (ft_memchr(s2, 'y', 0) == NULL)
        printf("passed.");
    else    printf("FAILED.");
    printf("\nTest3...");
    if ((char *)ft_memchr(s2, 'a', 1) - s2 == 0)
        printf("passed.");
    else    printf("FAILED.");
    printf("\nTest4...");
    if (ft_memchr(s2, 'd', 2)  == NULL)
        printf("passed.");
    else    printf("FAILED.");
    printf("\nTest5...");
    if ((char *)ft_memchr(s2, 'd', 12)  - s2 == 3)
        printf("passed.");
    else    printf("FAILED.");
    printf("\nTest6...");
    if ((char *)ft_memchr(s2, 'f', 12)  - s2 == 5)
        printf("passed.");
    else    printf("FAILED.");
    printf("\nTest7...");
    if ((char *)ft_memchr(s3, '1', 20)  - s3 == 0)
        printf("passed.");
    else    printf("FAILED.");
    putchar('\n');
}

int main(void)
{
    test_memchr();
    return 0;
}
