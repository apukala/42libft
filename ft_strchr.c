/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apukala <apukala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:10:03 by apukala           #+#    #+#             */
/*   Updated: 2021/07/18 13:45:10 by apukala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Most of the C standard library functions do not always make
sense when it comes to "const correctness". There is for example 
no way to cleanly implement strchr. You will have to return (char*)s 
and cast away the const, which is very bad programming practice. 
This is the fault of the person who specified the strchr function: 
it is flawed by design. */

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != (char) c)
	{
		if (str[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *) str + i);
}
