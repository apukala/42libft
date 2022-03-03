/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apukala <apukala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:10:27 by apukala           #+#    #+#             */
/*   Updated: 2022/03/03 18:56:45 by apukala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, const char *source, size_t count)
{
	size_t	i;
	size_t	a;
	size_t	k;

	i = 0;
	a = 0;
	while ((destination[i] != '\0') && (i < count))
		i++;
	k = i;
	while (((i + 1) < count) && (source[a] != '\0'))
	{
		destination[i] = source[a];
		a++;
		i++;
	}
	if (k < count)
		destination[i] = '\0';
	return (k + ft_strlen(source));
}
