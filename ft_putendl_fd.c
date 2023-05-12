/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:50:46 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/12 18:08:21 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return (NULL);
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}