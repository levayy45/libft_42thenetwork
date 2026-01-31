/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzidini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 04:24:31 by tzidini           #+#    #+#             */
/*   Updated: 2025/10/17 05:03:49 by tzidini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_1strcpy(char *dest, const char *src, const char *src1)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++ ;
	}
	j = 0;
	while (src1[j])
		dest[i++] = src1[j++];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len;
	char		*splus;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	splus = (char *)malloc(len + 1);
	if (splus == NULL)
		return (NULL);
	ft_1strcpy(splus, s1, s2);
	return (splus);
}
