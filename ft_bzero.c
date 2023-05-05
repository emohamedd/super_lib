/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 01:11:51 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/05 20:02:41 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	unsigned char *str;
	size_t i = 0;

	str = (unsigned char *)s;
	if (n == 0)
		return;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}