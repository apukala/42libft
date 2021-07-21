/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apukala <apukala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:08:37 by apukala           #+#    #+#             */
/*   Updated: 2021/07/21 16:23:16 by apukala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	a;
	void	*ptr;

	a = num * size;
	ptr = malloc(a);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, a);
	return (ptr);
}
