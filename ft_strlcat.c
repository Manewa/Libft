/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namalier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:31:34 by namalier          #+#    #+#             */
/*   Updated: 2023/09/11 18:35:25 by natgomali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t	i;
    size_t	j;

    j = ft_strlen((const char *)dest);
    if (j > size)
        return (size + ft_strlen(src));
    if (!src)
		return (j);
	if (!size)
        return (ft_strlen(src) + j);
    i = 0;
    while (src[i] && (i + j) < size - 1)
    {
        dest[i + j] = src[i];
        i++;
    }
	dest[i + j] = '\0';
    return (j + ft_strlen(src));
}
