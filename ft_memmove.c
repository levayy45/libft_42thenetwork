/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzidini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 03:20:48 by tzidini           #+#    #+#             */
/*   Updated: 2025/10/16 03:27:49 by tzidini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*vdest;
	const unsigned char	*vsrc;

	if (!dest || !src)
		return (NULL);
	vdest = (unsigned char *)dest;
	vsrc = (const unsigned char *)src;
	if (vsrc < vdest && vsrc + n > vdest)
	{
		while (n > 0)
		{
			n-- ;
			vdest[n] = vsrc[n];
		}
	}
	else
	{
		ft_memcpy(vdest, vsrc, n);
	}
	return (dest);
}
