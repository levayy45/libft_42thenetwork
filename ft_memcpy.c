/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzidini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:53:50 by tzidini           #+#    #+#             */
/*   Updated: 2025/10/16 12:11:23 by tzidini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*vdest;
	const unsigned char	*vsrc;

	if (src == dest)
		return (dest);
	i = 0;
	vdest = (unsigned char *)dest;
	vsrc = (const unsigned char *)src;
	while (i < n)
	{
		vdest[i] = vsrc[i];
		i++ ;
	}
	return (dest);
}
