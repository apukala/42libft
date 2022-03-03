/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apukala <apukala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:10:53 by apukala           #+#    #+#             */
/*   Updated: 2022/03/03 18:57:23 by apukala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
		i++;
	while (string[i] != (char) c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return ((char *) string + i);
}
