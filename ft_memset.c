/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzidini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:16:39 by tzidini           #+#    #+#             */
/*   Updated: 2025/10/15 20:48:57 by tzidini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sc;

	if (!s)
		return (NULL);
	i = 0;
	sc = (unsigned char *)s;
	while (i < n)
	{
		sc[i++] = (unsigned char)c;
	}
	return (s);
}
