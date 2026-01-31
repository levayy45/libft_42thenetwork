/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzidini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 02:51:44 by tzidini           #+#    #+#             */
/*   Updated: 2025/10/17 04:13:10 by tzidini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*check(unsigned int start, size_t s_len)
{
	char	*empty;

	if (start >= s_len)
	{
		empty = (char *)malloc(1);
		if (!empty)
			return (NULL);
		empty[0] = '\0';
		return (empty);
	}
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	sub_s = check(start, s_len);
	if (sub_s)
		return (sub_s);
	if (s_len - start < len)
		len = s_len - start;
	sub_s = (char *)malloc (len + 1);
	if (!sub_s)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		sub_s[i] = s[start + i];
		i++ ;
	}
	sub_s[i] = '\0';
	return (sub_s);
}
