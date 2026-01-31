/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzidini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:48:11 by tzidini           #+#    #+#             */
/*   Updated: 2025/10/17 02:15:31 by tzidini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*vs1;
	const unsigned char	*vs2;

	vs1 = (const unsigned char *)s1;
	vs2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && vs1[i] == vs2[i])
		i++ ;
	if (i == n)
		return (0);
	else
		return (vs1[i] - vs2[i]);
}
