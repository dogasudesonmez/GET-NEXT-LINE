/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsonmez <dsonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:49:03 by dsonmez           #+#    #+#             */
/*   Updated: 2024/11/04 02:00:41 by dsonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_strdup(const char *s1) 
{
    char *copy;
    size_t len = 0;

    while (s1[len]) len++;
    copy = malloc(len + 1);
    if (!copy) return NULL;

    for (size_t i = 0; i < len; i++) {
        copy[i] = s1[i];
    }
    copy[len] = '\0';
    return copy;
}

size_t	ft_strchr(const char *s)
{
    int i;
	while ('\n' != *s)
	{
		if (*s == '\n')
			return (i);
		i++;
	}
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, &*s, 1);
		s++;
	}
}