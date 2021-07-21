/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apukala <apukala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:09:59 by apukala           #+#    #+#             */
/*   Updated: 2021/07/21 16:23:51 by apukala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_del(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j++;
		i++;
	}
	return (j);
}

static int	ft_split_str(char **ptr_arr, const char *s, char c, int *j)
{
	int	i;
	int	a;

	i = 0;
	*j = 0;
	a = 0;
	while (i == 0 || s[i - 1] != '\0')
	{
		if (s[i] == c || s[i] == '\0')
		{
			if ((i - a) != 0)
			{
				ptr_arr[*j] = malloc(i - a + 1);
				if (ptr_arr[*j] == NULL)
					return (1);
				ft_strlcpy(ptr_arr[*j], s + a, i - a + 1);
				(*j)++;
			}
			a = i + 1;
		}
		i++;
	}
	ptr_arr[*j] = NULL;
	return (0);
}

char	**ft_split(const char *s, char c)
{
	char	**ptr_arr;
	int		j;
	int		k;

	if (s == NULL)
		return (NULL);
	j = ft_count_del(s, c);
	ptr_arr = ft_calloc(sizeof (char *), j + 2);
	if (ptr_arr == NULL)
		return (NULL);
	k = ft_split_str(ptr_arr, s, c, &j);
	if (k == 1)
	{
		while (j > 0)
		{
			j--;
			free(ptr_arr[j]);
		}
		free(ptr_arr);
		return (NULL);
	}
	else
		return (ptr_arr);
}
