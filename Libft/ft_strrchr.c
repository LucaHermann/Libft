/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 02:57:19 by lhermann          #+#    #+#             */
/*   Updated: 2016/11/11 03:17:28 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strrchr(const char *s, int c)
{
	char d;
	char i;

	i = ft_strlen(s);
	d = 0;
	while (i >= 0 && s[i] != d)
	{
		i--;
		if (!s[i])
			return (NULL);
	}
	return ((char *)s + i);
}
