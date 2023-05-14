/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:12:53 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/14 10:05:11 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	x;
	char	*str;
	int		i;

	x = (char)c;
	str = (char *)s;
	i = ft_strlen(s);
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
