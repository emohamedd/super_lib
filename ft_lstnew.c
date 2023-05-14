/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 11:37:07 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/14 15:37:48 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *c;
	
	c = malloc(sizeof(t_list));
	if (!c)
		return (NULL);
	c->content = content;
	c->next = NULL;

	return(c);
}