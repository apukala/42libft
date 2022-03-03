/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apukala <apukala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:11:02 by apukala           #+#    #+#             */
/*   Updated: 2022/03/03 18:57:30 by apukala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	str_size;
	char			*substr;

	i = 0;
	if (s == NULL)
		return (NULL);
	str_size = ft_strlen(s);
	substr = malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	if (start >= str_size)
		len = 0;
	else if (str_size < (start + len))
		len = str_size - start;
	while (i != len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
