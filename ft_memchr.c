/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namalier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:27:49 by namalier          #+#    #+#             */
/*   Updated: 2023/11/07 12:53:04 by namalier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char *)s)[i] != c && i < n && ((unsigned char *)s)[i])
		i++;
	if (((unsigned char *)s)[i] == c)
		return (&(((unsigned char *)s)[i]));
	return (NULL);
}
