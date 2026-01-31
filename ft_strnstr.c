/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzidini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:48:58 by tzidini           #+#    #+#             */
/*   Updated: 2025/10/15 10:53:04 by tzidini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big && len == 0)
		return (NULL);
	if (!*little)
		return ((char *)big);
	j = 0;
	while (big[j] && j < len)
	{
		i = 0;
		while (big[j + i] == little[i] && little[i] && i + j < len)
		{
			i++ ;
			if (!little[i])
				return ((char *)&big[j]);
		}
		j++ ;
	}
	return (NULL);
}
