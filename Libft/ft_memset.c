/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 04:58:00 by lhermann          #+#    #+#             */
/*   Updated: 2016/11/16 05:00:58 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtf.h"
#include <string.h>

void		*ft_memset(void *b, int c, size_t n)
{
	unsigned char *tmp;
	size_t i;

	i = 0;
	tmp = unsigned char *)b;
	while (i < n)
	{
		tmp[i] = (unsigned char)c;
		i++;
	}
	return (tmp);
}
