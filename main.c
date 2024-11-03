#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main()
{
    int fd;
       fd = open("doga.txt", O_CREAT | O_TRUNC, 0644);
        write(fd, "Merhaba Dünya\nBu bir test satırıdır.\nSon satır.\n", 48);
        close(fd);

    fd = open("doga.txt", O_RDONLY);
    get_next_line(3);

}