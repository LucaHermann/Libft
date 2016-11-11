/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 02:21:59 by lhermann          #+#    #+#             */
/*   Updated: 2016/11/11 03:28:47 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char d;
	char i;

	i = 0;
	d = 0;
	while (s[i] != d)
	{
		if (!s[i])
			return (NULL);
		i++;
	}
	return ((char *)(s + i));
}
