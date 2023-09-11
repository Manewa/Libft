/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natgomali <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:31:51 by natgomali         #+#    #+#             */
/*   Updated: 2023/09/11 17:45:32 by natgomali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include<stdio.h>
# include<stddef.h>
# include<stdlib.h>
# include<unistd.h>

//Functions from file : ft_strlcat.c
size_t	ft_strlcat(char *dest, const char *src, size_t size);

//Functions from file : ft_strlcpy.c
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

//Functions from file : ft_isascii.c
int		ft_isascii(int c);

//Functions from file : ft_strlen.c
size_t	ft_strlen(const char *c);

//Functions from file : ft_atoi.c
int		ft_atoi(const char *str);

//Functions from file : ft_isalnum.c
int		ft_isalnum(int c);

//Functions from file : ft_strncmp.c
int		ft_strncmp(const char *s1, const char *s2, size_t n);

//Functions from file : ft_isdigit.c
int		ft_isdigit(int c);

//Functions from file : ft_isprint.c
int		ft_isprint(int c);

//Functions from file : ft_isalpha.c
int		ft_isalpha(int c);

#endif
