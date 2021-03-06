/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 02:21:59 by lhermann          #+#    #+#             */
/*   Updated: 2016/11/17 06:07:02 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strchr(const char *s, int c)
{
	char	d;
	int		i;

	i = 0;
	d = c;
	while (s[i] != d)
	{
		if (s[i])
			return (NULL);
	}
	return ((char *)(s + i));
}
