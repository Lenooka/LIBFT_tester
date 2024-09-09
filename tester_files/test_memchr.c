#include "../../libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

void    test_memchr()
{
    char    *str;
    char    c;

    printf("\033[0;31mft_memchr: \033[0m ");
    str = "Hello World!";
    c = 'o';
    if (ft_memchr(str, c, 12) == memchr(str, c, 12))
        printf("\033[0;32mOK\033[0m");
    else
        printf("\033[0;31mKO\033[0m");
    c = 'H';
    if (ft_memchr(str, c, 12) == memchr(str, c, 12))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    c = '!';
    if (ft_memchr(str, c, 12) == memchr(str, c, 12))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    c = ' ';
    if (ft_memchr(str, c, 12) == memchr(str, c, 12))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m\n");
    printf("\n");
}

int main()
{
    test_memchr();
    return 0;
}