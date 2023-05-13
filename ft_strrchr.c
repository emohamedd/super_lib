/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:12:53 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/13 11:56:56 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
char	*ft_strrchr(const char *s, int c)
{
	char x = (char)c;
	char *str = (char *)s;
	int i = ft_strlen(s);

	if (!s)
		return (NULL);
	while (i >= 0)
	{
		if (str[i] == x)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}