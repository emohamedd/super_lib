/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 13:28:33 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/07 14:55:20 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t dlen;
	size_t slen;
	size_t size;
	i = 0;
	j = 0;
	while (dst[i])
		i++;
	dlen = i;
	while (src[j])
		j++;
	slen = j;
	if (dstsize == 0 || dlen > dstsize)
		return (dstsize + slen);
	size = dstsize - dlen - 1;
	j = 0;
	while (j < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return(dlen + slen);
}
int main()
{
    char dest[10] = "a";
   	ft_strlcat(dest, "lorem ipsum dolor sit amet", 6);
    printf("%s\n", dest);
}