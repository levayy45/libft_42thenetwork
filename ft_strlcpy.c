/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzidini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:35:23 by tzidini           #+#    #+#             */
/*   Updated: 2025/11/02 15:01:02 by tzidini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t d)
{
	size_t	i;
	size_t	len2;

	len2 = ft_strlen(src);
	if (d == 0)
		return (len2);
	i = 0;
	while (i < d -1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++ ;
	}
	dest[i] = '\0';
	return (len2);
}
