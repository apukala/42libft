/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apukala <apukala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:10:31 by apukala           #+#    #+#             */
/*   Updated: 2021/07/21 19:33:30 by apukala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t dest_size)
{
	size_t	i;

	i = 0;
	if (dest_size > 0)
	{
		while (i < (dest_size - 1) && source[i])
		{
			destination[i] = source[i];
			i++;
		}
		destination[i] = '\0';
	}
	return (ft_strlen(source));
}
