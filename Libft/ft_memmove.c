/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 05:22:46 by lhermann          #+#    #+#             */
/*   Updated: 2016/11/16 05:25:09 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char tmp[n];

	ft_strncpy((char *)tmp, src, n);
	ft_strncpy((char *)dest, tmp, n);
	return (dest);
}
