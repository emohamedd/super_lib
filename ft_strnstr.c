// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_strnstr.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2023/05/08 12:20:31 by emohamed          #+#    #+#             */
// /*   Updated: 2023/05/08 12:38:00 by emohamed         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h"
// char *ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t i;
// 	char *store;
	
// 	while(needle[i])
// 	{
// 		store[i] = needle[i];
// 		i++;
// 	}
// 	store[i] = '/0';
// 	i = 0;
// 	while (haystack[i] < len)
// 	{
// 		if (haystack[i] == store[i])
// 			ft_ch(haystack, '/0');
// 		return (NULL);
// 	}
// 	return (NULL);
// }
// int main()
// {
// 	const char s[] = "Amine is the best";
// 	const char s2[] = "Amine";

// 	printf("%s\n", ft_strnstr(s2, s, 10));
// }