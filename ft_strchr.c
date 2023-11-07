/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namalier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:53:36 by namalier          #+#    #+#             */
/*   Updated: 2023/11/07 17:24:00 by namalier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (!s[i])
		return (0);
	while (s[i] && s[i] != (char)c)
	{
		i++;
	}
	if (!s[i] && s[i] != (char)c)
		return (NULL);
	return ((char *)&s[i]);
}
