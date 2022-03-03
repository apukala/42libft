/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apukala <apukala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:10:45 by apukala           #+#    #+#             */
/*   Updated: 2022/03/03 18:57:15 by apukala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *) str1;
	b = (unsigned char *) str2;
	while (i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		else if ((a[i] == '\0') && (b[i] == '\0'))
			return (0);
		i++;
	}
	return (0);
}
