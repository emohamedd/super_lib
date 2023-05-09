/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:38:12 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/09 15:19:25 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t count, size_t size)
{
	size_t sizee;
	void *p;
	size_t i;
	
	i = 0;
	sizee = count * size;
	p = malloc(sizee);
	if (!p)
		return (NULL);
	while (i < size)
	{
		((unsigned char *)p)[i] = '\0';
		i++;
	}
	return (p);
}
