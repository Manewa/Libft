/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namalier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:28:34 by namalier          #+#    #+#             */
/*   Updated: 2023/11/07 15:40:12 by namalier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

//Functions from file : ft_memchr.c
void	*ft_memchr(const void *s, int c, size_t n);

//Functions from file : ft_memcmp.c
int		ft_memcmp(const void *s1, const void *s2, size_t n);

//Functions from file : ft_strlcat.c
size_t	ft_strlcat(char *dest, const char *src, size_t size);

//Functions from file : ft_strdup.c
char	*ft_strdup(const char *s);

//Functions from file : ft_memmove.c
void	*ft_memmove(void *dest, const void *src, size_t n);

//Functions from file : ft_memset.c
void	*ft_memset(void *s, int c, size_t n);

//Functions from file : toupper.c
int		ft_toupper(int i);

//Functions from file : tolower.c
int		ft_tolower(int c);

//Functions from file : ft_strrchr.c
size_t		ft_strlen(const char *str);

char	*ft_strrchr(const char *s, int c);

//Functions from file : ft_strnstr.c
char	*ft_strnstr(const char *str, const char *tofind, size_t n);

//Functions from file : ft_strncmp.c
int		ft_strncmp(const char *s1, const char *s2, size_t n);

//Functions from file : ft_strlen.c
size_t	ft_strlen(const char *c);

//Functions from file : ft_strlcpy.c
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

//Functions from file : ft_strchr.c
char	*ft_strchr(const char *s, int c);

//Functions from file : ft_memcpy.c
void	*ft_memcpy(void *dest, const void *src, size_t n);

//Functions from file : ft_isprint.c
int		ft_isprint(int c);

//Functions from file : ft_isdigit.c
int		ft_isdigit(int c);

//Functions from file : ft_isascii.c
int		ft_isascii(int c);

//Functions from file : ft_isalpha.c
int		ft_isalpha(int c);

//Functions from file : ft_isalnum.c
int		ft_isalnum(int c);

//Functions from file : ft_bzero.c
void	ft_bzero(void *s, size_t n);

//Functions from file : ft_atoi.c
int		ft_atoi(const char *str);

#endif
