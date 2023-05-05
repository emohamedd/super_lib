/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:31:28 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/05 20:05:11 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H	

#include <stdio.h>
#include <stdlib.h>
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isalnum(int c);
int ft_strlen(const char *s);
int ft_isprint(int c);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);



#endif