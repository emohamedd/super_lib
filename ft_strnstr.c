/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 10:08:03 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/13 13:08:36 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)

{
	size_t i = 0;
	size_t j = 0;
	
	if (ft_strlen(needle) == 0 || len == 0)
		return ((char *)haystack);
	if (ft_strlen(haystack) == 0)
		return (NULL);
	if ((!needle && !haystack))
		return ((char *)haystack);
	
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[j] && ft_strncmp(haystack + i, needle, ft_strlen(needle)) == 0 && (ft_strlen(needle) + i) <= len)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	const char s[] = "Amine is the best";
// 	const char s2[] = "is";

// 	char *found = ft_strnstr(s, s2, ft_strlen(s));
// 	printf("%s\n", found);
// }