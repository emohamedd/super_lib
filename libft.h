/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:31:28 by emohamed          #+#    #+#             */
/*   Updated: 2023/05/07 21:14:20 by emohamed         ###   ########.fr       */
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
int ft_isascii(int c);
size_t ft_strlen(const char *s);
int ft_isprint(int c);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlcat(char *dst, char *src, size_t dstsize);
void *ft_memcpy(void *dst, const void *src, size_t n);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);

#endif