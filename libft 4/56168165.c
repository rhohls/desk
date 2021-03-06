/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhohls <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 13:42:21 by rhohls            #+#    #+#             */
/*   Updated: 2018/05/29 13:42:24 by rhohls           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_fd(int num, int fd)
{
	int num_dig;
	
	num_dig = ft_int_len(num);
	
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num *= (-1);
	}
	while (num_dig)
	{
		ft_putchar_fd((num / (ft_power(10, num_dig))) + '0', fd);
		num_dig--;
	}
}
