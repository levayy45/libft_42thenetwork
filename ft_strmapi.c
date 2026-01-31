/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzidini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 12:20:08 by tzidini           #+#    #+#             */
/*   Updated: 2025/10/19 12:20:10 by tzidini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*vs;
	unsigned int	len;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	vs = (char *)malloc(len + 1);
	if (!vs)
		return (NULL);
	while (i < len)
	{
		vs[i] = f(i, s[i]);
		i++ ;
	}
	vs[i] = '\0';
	return (vs);
}
