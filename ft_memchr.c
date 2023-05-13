/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:48:03 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/08 10:46:57 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *u = (unsigned char *)s;
	size_t i;

	i = 0;

	while (i < n)
	{
		if (u[i] == (unsigned char)c)
			return (&u[i]);
		i++;
	}
	return (NULL);
}