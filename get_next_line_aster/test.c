/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 14:37:33 by rhohls            #+#    #+#             */
/*   Updated: 2018/06/06 06:49:44 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <sys/wait.h>

int	get_next_line(int fd, char **line);
//int get_next_line(int fd, char **line);
int	main(int argc, char ** argv)
{
	int		fd;
	char	*line;

	if (argc < 2)
	{
		printf("Usage %s <filename>\n", argv[0]);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("open error");
		close(fd);
		return (-1);
	}
	int i = 0;
	int j = 1;
	while (j == 1)
	{
		j = get_next_line(fd, &line);
		printf("gnl ret val: %i ", j);
//		j = get_next_line(fd, &line);
//		if (j == 0)
//			printf("\n done! \n");
		printf("line %i is:\t |%s| \n",i, line);
		free(line);	
		i++;
	}
	close(fd);
 	return 1;
}
