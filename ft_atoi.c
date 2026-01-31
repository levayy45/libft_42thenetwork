/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzidini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:58:00 by tzidini           #+#    #+#             */
/*   Updated: 2025/10/15 12:10:41 by tzidini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(int sign)
{
	if (sign == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	long				result;
	long				re;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++ ;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++ ;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		re = result ;
		result = result * 10 + (str[i] - '0');
		if (result / 10 != re)
			return (check(sign));
		i++ ;
	}
	return ((int)(result * sign));
}
