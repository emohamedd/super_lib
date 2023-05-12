/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:09:33 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/12 18:09:41 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n , int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n -= 1;
		ft_putnbr_fd(n , fd);
	}
	if ( n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar_fd(n + 48, fd);
}
