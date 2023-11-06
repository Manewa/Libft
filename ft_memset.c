/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namalier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:53:29 by namalier          #+#    #+#             */
/*   Updated: 2023/11/06 16:53:30 by namalier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	i = 0;

	while (i < n)
	{
		((char *)s)[i] = (char)c;
		i++;
	}
	return (s);
}
