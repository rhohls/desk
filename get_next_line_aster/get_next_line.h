/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 07:55:03 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/09 16:24:43 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/includes/libft.h"

# define BUFF_SIZE 512

typedef struct		s_fd
{
	int			fd;
	int			start;
	t_list		*lst;
	struct s_fd	*next;
}					t_fd;

int					get_next_line(int const fd, char **line);

#endif
