/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apukala <apukala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 20:24:17 by apukala           #+#    #+#             */
/*   Updated: 2021/07/21 16:23:41 by apukala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(long nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

static char	*ft_new_itoa(int n, char *temp_str)
{
	long	nbr;
	int		len;

	nbr = n;
	len = ft_length(nbr);
	temp_str[len] = '\0';
	if (nbr < 0)
	{
		temp_str[0] = '-';
		nbr = -nbr;
	}
	else if (nbr == 0)
		temp_str[0] = '0';
	while (nbr != 0)
	{
		len--;
		temp_str[len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	return (temp_str);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	*string;
	char	temp_str[100];

	string = ft_new_itoa(n, temp_str);
	ft_putstr_fd(string, fd);
}
