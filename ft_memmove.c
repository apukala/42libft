/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apukala <apukala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:09:29 by apukala           #+#    #+#             */
/*   Updated: 2022/03/03 18:56:09 by apukala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;
	char		*a;
	const char	*b;

	a = (char *)dest;
	b = (const char *)src;
	if (dest < src)
	{
		i = 0;
		while (i != (int) n)
		{
			a[i] = b[i];
			i++;
		}
	}
	else if (dest > src)
	{
		i = n - 1;
		while (i != -1)
		{
			a[i] = b[i];
			i--;
		}
	}
	return (dest);
}
