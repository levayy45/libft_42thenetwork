/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzidini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 05:06:16 by tzidini           #+#    #+#             */
/*   Updated: 2025/10/17 05:09:43 by tzidini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_c(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++ ;
	}
	return (0);
}

static size_t	ft_check_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0 ;
	while (s1[i] && ft_find_c(s1[i], set))
		i++ ;
	return (i);
}

static size_t	ft_check_end(char const *s1, char const *set, size_t start)
{
	size_t	end;

	end = ft_strlen(s1);
	while (end > start && ft_find_c(s1[end - 1], set))
		end-- ;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*dup;

	if (!s1 || !set)
		return (NULL);
	start = ft_check_start(s1, set);
	end = ft_check_end(s1, set, start);
	dup = (char *)malloc (end - start + 1);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s1 + start, end - start + 1);
	return (dup);
}
