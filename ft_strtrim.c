/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namalier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:33:56 by namalier          #+#    #+#             */
/*   Updated: 2023/11/09 18:01:55 by namalier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char const *s, char const *set, size_t i)
{
	size_t j;

	if (i == 0)
	{
		while (s[i])
		{
			j = 0;
			while (set[j])
			{
				if (s[i] != set[j])
					return (i);
				j++;
			}
			i++;
		}
	}
	else
	{
		while (s[i])
		{
			j = 0;
			while(set[j])
			{
				if (s[i] != set[j])
					return (i);
				j--;
			}
		}
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
		size_t	start;
		size_t	end;
		size_t	i;
		char	*str;

		i = 0;
		if (ft_check(s1, set, i) == -1)
			return(NULL);
		start = ft_check(s1, set, i);
		end = ft_check(s1, set, ft_strlen(s1) - 1);
		str = malloc((end - start + 1) * sizeof(char));
		while (start <= end)
		{
				str[i] = s1[start];
				i++;
				start++;
		}
		str[i] = '\0';
		return (str);
}
