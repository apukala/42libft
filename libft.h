/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apukala <apukala@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 11:53:12 by apukala           #+#    #+#             */
/*   Updated: 2021/07/21 16:26:40 by apukala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isalnum(int b);

int		ft_isalpha(int c);

int		ft_isascii(int a);

int		ft_isdigit(int a);

int		ft_isprint(int a);

char	*ft_strchr(const char *str, int c);

size_t	ft_strlcat(char *destination, const char *source, size_t count);

size_t	ft_strlcpy(char *destination, const char *source, size_t dest_size);

size_t	ft_strlen(const char *string);

char	*ft_strrchr(const char *string, int c);

int		ft_tolower(int a);

int		ft_toupper(int c);

void	*ft_memset(void *str, int c, size_t n);

void	ft_bzero(void *s, size_t n);

char	*ft_strnstr(const char *big_s, const char *lit_s, size_t length);

int		ft_atoi(const char *str);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_calloc(size_t num, size_t size);

void	*ft_memmove(void *dest, const void *src, size_t n);

int		ft_strncmp(const char *str1, const char *str2, size_t n);

char	*ft_strdup(const char *string);

void	*ft_memchr(const void *str, int c, size_t n);

int		ft_memcmp(const void *str1, const void *str2, size_t n);

char	*ft_substr(const char *s, unsigned int start, size_t len);

char	*ft_strjoin(const char *s1, const char *s2);

char	*ft_strtrim(const char *s1, const char *set);

char	**ft_split(const char *s, char c);

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	ft_putchar_fd(char c, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

void	ft_putstr_fd(char *s, int fd);

char	*ft_itoa(int n);

#endif
