/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsonmez <dsonmez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:08:02 by dsonmez           #+#    #+#             */
/*   Updated: 2024/11/04 02:14:09 by dsonmez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static char *dup_line(char *line, char *buffer, size_t i)
{
    line = (char *)malloc(sizeof(char) * i + 1);
    while (i > 0)
    {
        line[i + 1] = buffer[i + 1];
        i--;
    }
    return (line);
}

char *get_next_line(int fd)
{
    static char *buffer;
    char *line;
    int read_byte;
 
    line = NULL;
    read_byte = 0;  
    printf("%d", read_byte);
    if(fd < 0 || BUFFER_SIZE <= 0)
        return NULL;
    buffer = (char *)malloc(BUFFER_SIZE + 1);
    if(!buffer)
        return NULL;
    read_byte = read(fd, buffer, BUFFER_SIZE);
    printf("%d", read_byte);
    if (read_byte == -1) 
    {
        free(buffer);
        return NULL;
    }
    buffer[read_byte] = '\0';
    dup_line(line,buffer,ft_strchr(buffer));

    return (line);
}