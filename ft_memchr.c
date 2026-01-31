/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzidini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:09:53 by tzidini           #+#    #+#             */
/*   Updated: 2025/10/16 12:10:27 by tzidini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*vs;

	i = 0;
	vs = (const unsigned char *)s;
	while (i < n)
	{
		if (vs[i] == (unsigned char)c)
			return ((void *)&vs[i]);
		i++ ;
	}
	return (NULL);
}
