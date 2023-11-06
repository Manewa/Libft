/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namalier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:54:06 by namalier          #+#    #+#             */
/*   Updated: 2023/11/06 16:54:08 by namalier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlen(const char *c)
{
	size_t i;

	i = 0;
	if(!c)
		return(0);
	while(c[i])
		i++;
	return(i);
}
