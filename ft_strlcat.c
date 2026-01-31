/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzidini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:47:05 by tzidini           #+#    #+#             */
/*   Updated: 2025/10/15 01:40:19 by tzidini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len1;
	size_t	len2;

	len2 = ft_strlen(src);
	if (size == 0 && dest == NULL)
		return (len2);
	len1 = ft_strlen(dest);
	if (len1 >= size)
		return (size + len2);
	i = 0;
	while ((len1 + i) < size - 1 && src[i])
	{
		dest[len1 + i] = src[i];
		i++ ;
	}
	dest[len1 + i] = '\0';
	return (len1 + len2);
}
