/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaksimo <emaksimo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 21:10:58 by emaksimo          #+#    #+#             */
/*   Updated: 2023/01/18 00:01:44 by emaksimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>

int		ft_atoi(const char *str);
int		ft_isalnum(int ch);
int		ft_isalpha(char ch);
int		ft_isascii(int ch);
int		ft_isdigit(int ch);
int		ft_isprint(int ch);
int		ft_memcmp(const void *arr_1, const void *arr_2, size_t n);
int		ft_strncmp(const char *str_1, const char *str_2, size_t n);
int		ft_tolower(int ch);
int		ft_toupper(int ch);

char	*ft_strchr(const char *str, int ch);
char	*ft_strdup(const char *str);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *str, int ch);

void	ft_bzero(void *buf, size_t count);
void	*ft_calloc(size_t number, size_t size);
void	*ft_memchr(const void *arr, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *buf, int ch, size_t count);

size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);

#endif