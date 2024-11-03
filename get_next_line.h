/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsonmez <dsonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:44:06 by dsonmez           #+#    #+#             */
/*   Updated: 2024/11/04 02:00:33 by dsonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 1024
#endif

char *get_next_line(int fd);
size_t	ft_strchr(const char *s);
void	ft_putstr_fd(char *s, int fd);
char *ft_strdup(const char *s1);

#endif