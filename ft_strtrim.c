/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:47:21 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/10 15:41:12 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int check_char(char const c, char const *set)
{
	 int j;
	 j = 0;

	while (set[j])
	{
		if (c == set[j])
	 		return 1;
		j++;
	}
	return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
	int begin;
	int end;

	begin = 0;
	if (!s1)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (s1[begin] && check_char(s1[begin], set))
		begin++;
	while (end >= begin && check_char(s1[end], set))
		end--;
	return (ft_substr(s1, begin, end - begin + 1));
}