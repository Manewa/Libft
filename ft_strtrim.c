/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namalier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:33:56 by namalier          #+#    #+#             */
/*   Updated: 2023/11/10 17:34:09 by namalier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_end(char const *s1, char const *set, size_t i)
{
	size_t j;

	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
			return (0);
		j++;
	}
	return(1);
}

int	ft_check_start(char const *s1, char const *set, size_t i)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (s1[i] == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t start;
	size_t end;
	char *str;

	i = 0;
	while (s1[i] && ft_check_start(s1, set, i) == 1)
		i++;
	start = i;
	if (ft_strlen(s1) > 0)
		i = ft_strlen(s1) - 1;
	else
		i = 0;
	while (i >= 0 && ft_check_end(s1, set, i) == 0)
		i--;
	end = i;
	str = malloc((end - start + 2) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (start <= end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
