/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 05:33:21 by lhermann          #+#    #+#             */
/*   Updated: 2016/11/17 06:05:12 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char						*d;
	unsigned int		i;
	unsigned int		j;

	i = 0;
	j = 0;
	if (!s || !f)
		return (NULL);
	if (!(d =(char *)malloc(sizeof(*s) * ft_strlen(s) + 1)))
		return (NULL);
	while (s[i])
	{
		d[i] = (*f)(j, s[i]);
		i++;
		j++;
	}
	d[i] = "\0";
	return (d);
}
