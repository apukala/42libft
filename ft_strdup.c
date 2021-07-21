/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apukala <apukala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:10:07 by apukala           #+#    #+#             */
/*   Updated: 2021/07/21 16:23:59 by apukala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	int		i;
	char	*str_copy;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	i = i + 1;
	str_copy = (char *) malloc(i);
	if (str_copy == NULL)
		return (NULL);
	ft_strlcpy(str_copy, string, i);
	return (str_copy);
}
