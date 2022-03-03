/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apukala <apukala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:10:49 by apukala           #+#    #+#             */
/*   Updated: 2022/03/03 18:57:19 by apukala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big_s, const char *lit_s, size_t length)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while ((big_s[i + j] != '\0') && (lit_s[j] != '\0') && ((i + j) != length))
	{
		if (big_s[i + j] == lit_s[j])
			j++;
		else
		{
			i++;
			j = 0;
		}
	}
	if (lit_s[j] == '\0')
		return (((char *)big_s) + i);
	return (NULL);
}
