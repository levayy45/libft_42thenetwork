/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzidini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:17:03 by tzidini           #+#    #+#             */
/*   Updated: 2025/10/17 02:17:24 by tzidini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tt;

	if (size == 0 || nmemb == 0)
		return (malloc(0));
	if (nmemb > (size_t)(-1) / size)
		return (NULL);
	tt = (void *)malloc (nmemb * size);
	if (!tt)
		return (NULL);
	ft_bzero(tt, nmemb * size);
	return (tt);
}
