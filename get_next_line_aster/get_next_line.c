/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 07:39:12 by rhohls            #+#    #+#             */
/*   Updated: 2018/06/04 14:17:31 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "get_next_line.h"


#include <stdio.h>

ssize_t read(int fildes, void *buf, size_t nbyte);

/*
 * If successful, the number of bytes actually read is returned.  Upon read-
     ing end-of-file, zero is returned.  Otherwise, a -1 is returned and the
     global variable errno is set to indicate the error.
*/


int get_next_line(const int fd, char **line)
{
	if (BUFF_SIZE <= 0)
		return (-1);

	int			read_ret;
	static char	*strhold;
	char		*newstr;
//	char		*strjoined;

	if (strhold)
	{
		printf("lol");
		return 1;
	}
	newstr = ft_strnew(BUFF_SIZE);
	// protection
	if ((read_ret = read(fd, newstr, BUFF_SIZE)) == -1)
		return -1;
	
	if (ft_strchr(newstr, '\n') == NULL)
		return 0;

	*line = newstr;

	return 1;
}





