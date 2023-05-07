/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:12:53 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/07 19:11:50 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char x = (char)c;
	size_t i = ft_strlen(s); 

	if(!s)
		return (NULL);
	while (i >= 0)
	{
		if (s[i] == x)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

int main()
{
	char s[] = "tripouille";
	printf("%s\n", ft_strrchr(s, 'x'));
}