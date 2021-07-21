/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apukala <apukala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:09:17 by apukala           #+#    #+#             */
/*   Updated: 2021/07/14 13:34:26 by apukala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	b;

	i = 0;
	a = (unsigned char *) str;
	b = (unsigned char) c;
	while (i < n)
	{
		if (a[i] == b)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
