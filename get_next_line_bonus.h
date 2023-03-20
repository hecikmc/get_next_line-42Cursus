/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmerchan <jmerchan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:23:20 by jmerchan          #+#    #+#             */
/*   Updated: 2023/03/20 16:35:29 by jmerchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

/* 
This is the main function that reads from a file descriptor and returns 
the line found (get_next_line.c) 
*/
char	*get_next_line(int fd);

/* 
These functions are used by getnextline to collect the line of the document
and to store in a static variable (buffer) the rest of the reading that 
is not part of the line so that the next reading does not lose information
and continues where it left off (get_next_line.c)
*/
char	*ft_readf(int fd, char *str);
char	*ft_oneline(char *str);
char	*ft_getbuffer(char *str);

/*
These functions are from the libft with some littles changes to improve the 
management about memory leaks (get_next_line_utils.c)
*/
char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(char *s1, char const *s2);
size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_calloc(size_t n, size_t size);

#endif