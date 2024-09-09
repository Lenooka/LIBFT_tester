#include "../libft.h"
#include <stdio.h>
#include <fcntl.h>

void    test_putnbr_fd()
{
    int     fd;

    printf("\033[0;31mft_putnbr_fd: \033[0m");
    fd = open("temp", O_RDWR | O_CREAT | O_TRUNC, 0644);
    ft_putnbr_fd(123, fd);
    lseek(fd, 0, SEEK_SET);
    char s[10] = {0}; 
    read(fd, s, 3);
    if (strcmp(s, "123") != 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    close(fd);
    unlink("temp");
    printf("\n");
}

int   main()
{
    test_putnbr_fd();
    return (0);
}