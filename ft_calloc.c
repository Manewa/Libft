/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namalier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:01:50 by namalier          #+#    #+#             */
/*   Updated: 2023/11/08 20:06:13 by namalier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmb, size_t size)
{
	void	*str;

	if (size > 0 && nmb > SIZE_MAX / size)
		return (NULL);
	str = malloc(nmb * size);
	if (!str)
		return (NULL);
	ft_bzero(str, nmb * size);
	return (str);
}
