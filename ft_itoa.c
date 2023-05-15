/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 09:47:11 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/15 20:28:35 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_len(int n)
{
	int i;
	
	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}
char *ft_itoa(int n)
{
	int i;
	char *p;

	i = count_len(n);
	p = malloc((count_len(n) + 1) * sizeof(char));
	if (!p)
		return (NULL);
	p[i] = '\0';
		i--;
	if (n < 0)
	{
		p[0] = '-';
		n = -n;
	}
	while(n > 0)
	{
		p[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (p);	
}
int main()
{
	printf("%s\n", ft_itoa(-211));
}
