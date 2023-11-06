/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namalier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:53:36 by namalier          #+#    #+#             */
/*   Updated: 2023/11/06 16:53:37 by namalier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (!s[i])
		return (NULL);

	while (s[i] && s[i] != (char)c)
	{
		i++;
	}
	return ((char *)&s[i]);
}
