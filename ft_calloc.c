/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namalier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:01:50 by namalier          #+#    #+#             */
/*   Updated: 2023/11/07 20:23:31 by namalier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmb, size_t size)
{
	size_t i;
	void	*str;

	i = 0;
	str = malloc(nmb * sizeof(size));
	if (!str)
		return (0);
	while (i < nmb)
	{
		((char *)str)[i] = '0';
		i++;
	}
	return (str);
}
