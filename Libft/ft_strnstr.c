/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 03:48:41 by lhermann          #+#    #+#             */
/*   Updated: 2016/11/17 01:09:33 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*tmp_s1;
	size_t	i;
	size_t	j;
	int		len_s2;

	i = 0;
	tmp_s1 = (char *)s1;
	len_s2 = ft_strlen(s2);
	if (!len_s2)
		return ((char *)s1);
	while (tmp_s1[i] && i < n)
	{
		if (tmp_s1[i] == s2[0])
		{
			j = 0;
			while (tmp_s1[i + j] == s2[j] && (i + j) < n)
				j++;
			if (!s2[j])
				return (&tmp_s1[i]);
		}
		i++;
	}
	return (NULL);
}
