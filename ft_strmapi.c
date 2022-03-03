/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apukala <apukala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:10:42 by apukala           #+#    #+#             */
/*   Updated: 2022/03/03 18:57:12 by apukala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str_new;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	str_new = malloc(ft_strlen(s) + 1);
	if (str_new == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str_new[i] = (*f)(i, s[i]);
		i++;
	}
	str_new[i] = '\0';
	return (str_new);
}
