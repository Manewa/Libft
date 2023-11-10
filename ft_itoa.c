/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namalier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:41:18 by namalier          #+#    #+#             */
/*   Updated: 2023/11/10 21:41:02 by namalier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_num(int n)
{
	size_t i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t i;
	int count;
	char *res;

	count = 1;
	if (n < 0)
	{
		count *= -1;
		n *= -1;
	}
	i = ft_count_num(n);
	res = malloc(i + 1 * sizeof(char));
	res[i--] = '\0';
	while (i > 0)
	{
		res[i--] = (n % 10) + '0';
		n = n % 10;
	}
	if (count < 0)
		res[0] = '0';
	return (res);
}
