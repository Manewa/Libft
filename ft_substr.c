/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namalier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:46:02 by namalier          #+#    #+#             */
/*   Updated: 2023/11/08 19:48:31 by namalier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stdio.h>
#include<stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	unsigned int	st;

	i = 0;
	st = start;
	str = malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	while (s[st] && i < len)
	{
		str[i] = s[st];
		i++;
		st++;
	}
	return (str);
}

int main()
{
	char const *s = "abcpouet";
	unsigned int i = 12;
	size_t l = 4;

	printf("%s\n", ft_substr(s, i, l));
	return (0);
}
