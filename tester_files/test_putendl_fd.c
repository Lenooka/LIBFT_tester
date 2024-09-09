#include "../../libft.h"
#include <fcntl.h>  
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

void    test_putendl_fd()
{
    int     fd;

    printf("\033[0;31mft_putendl_fd:\033[0m");
    fd = open("temp", O_RDWR | O_CREAT | O_TRUNC, 0644);
    ft_putendl_fd("hello", fd);
    lseek(fd, 0, SEEK_SET);
    char s[10] = {0}; 
    read(fd, s, 6);
    if (strcmp(s, "hello\n") != 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    close(fd);
    unlink("./temp");
    printf("\n");
}

int   main()
{
    test_putendl_fd();
    return (0);
}