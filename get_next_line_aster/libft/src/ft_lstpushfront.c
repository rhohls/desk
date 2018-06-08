/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushfront.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:17:52 by ncoden            #+#    #+#             */
/*   Updated: 2014/11/07 13:38:21 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstpushfront(t_list **lst, const void *content, size_t size)
{
	t_list	*new_lst;

	new_lst = ft_lstnew(content, size);
	if (new_lst == NULL)
		return (NULL);
	if (*lst == NULL)
		*lst = new_lst;
	else
		ft_lstadd(lst, new_lst);
	return (new_lst);
}
