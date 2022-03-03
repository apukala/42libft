/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apukala <apukala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:08:18 by apukala           #+#    #+#             */
/*   Updated: 2022/03/03 18:55:27 by apukala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	a;
	int	k;
	int	j;

	i = 0;
	j = 0;
	a = 0;
	k = 1;
	while ((str[i + j] >= 7 && str[i + j] <= 13) || str[i + j] == 32)
		j++;
	if (str[j] == '-' || str[j] == '+')
		j++;
	while (str[i + j] != '\0' && (str[i + j] >= '0' && str[i + j] <= '9'))
		i++;
	i--;
	while (i != -1)
	{
		a = a + ((str[i + j] - '0') * k);
		k = k * 10;
		i--;
	}
	if ((j > 0) && (str[j - 1] == '-'))
		a = -a;
	return (a);
}
