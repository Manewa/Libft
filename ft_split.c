/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namalier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:51:09 by namalier          #+#    #+#             */
/*   Updated: 2023/11/09 12:55:08 by namalier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t start;
	char 	**str;

	j = 0;
	i = 0;
	start = 0;
	str = NULL;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			return(str);
		while (s[i] != c)
			{
				i = start;
				i++;
			}
		ft_memcpy(str[j], ((void *)s + start), i - start);
		j++;
	}
	return (str);
}
