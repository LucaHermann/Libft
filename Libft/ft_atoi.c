/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 23:29:47 by lhermann          #+#    #+#             */
/*   Updated: 2016/11/16 05:06:03 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int res;
	int n;

	n = 1;
	res = 0;
	while ((*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' ||
				*str == '\r' || *str == '\f'))
		str++;
	if (*str == '-')
	{
		n = -n;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	return (res * n);
}
