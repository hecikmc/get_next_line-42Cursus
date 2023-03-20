/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:58:17 by jmerchan          #+#    #+#             */
/*   Updated: 2023/01/16 13:26:19 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*r;

	i = 0;
	r = (char *) str;
	if ((char)c == 0)
		return (&r[ft_strlen(r)]);
	while (r[i] != 0)
	{
		if (r[i] == (char)c)
			return (&r[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*join;
	size_t	size;
	int		i;

	size = ft_strlen(s1) + ft_strlen(s2);
	join = (char *) ft_calloc(sizeof (char), (size + 1));
	i = ft_strlen(s1);
	ft_memcpy(join, s1, i);
	ft_memcpy(&join[i], s2, ft_strlen(s2));
	join[size] = 0;
	free(s1);
	return (join);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != 0)
		i++;
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*strd;
	char	*strs;
	size_t	i;

	strs = (char *) src;
	strd = (char *) dest;
	i = 0;
	if (!strs && !strd)
		return (0);
	while (i < n)
	{
		strd[i] = strs[i];
		i++;
	}
	return ((void *)strd);
}

char	*ft_calloc(size_t n, size_t size)
{
	char	*r;
	size_t	i;

	r = malloc(n * size);
	i = 0;
	if (r == 0)
		return (0);
	while (i < n)
	{
		r[i] = 0;
		i++;
	}
	return (r);
}
