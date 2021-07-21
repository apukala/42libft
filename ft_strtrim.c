/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apukala <apukala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:10:56 by apukala           #+#    #+#             */
/*   Updated: 2021/07/21 16:24:19 by apukala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	n;
	char	*dest;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (ft_strchr(set, s1[i]) != NULL && s1[i] != '\0')
		i++;
	j = ft_strlen(s1) - 1;
	if (s1[i] != '\0')
	{
		while (ft_strchr(set, s1[j]) != NULL)
			j--;
	}
	j = j + 1;
	n = j - i;
	dest = malloc(n + 1);
	if (dest == NULL)
		return (NULL);
	dest[n] = '\0';
	ft_memcpy(dest, s1 + i, n);
	return (dest);
}
