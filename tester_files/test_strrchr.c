#include "../../libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

void    test_strrchr()
{
    char    *str;
    char    c;

    printf("\033[0;31mft_strrchr:\033[0m ");

    str = "Hello World!";
    c = 'o';
    if (ft_strrchr(str, c) == strrchr(str, c))
        printf("\033[0;32mOK\033[0m");
    else
        printf("\033[0;31mKO\033[0m");

    c = 'H';
    if (ft_strrchr(str, c) == strrchr(str, c))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");

    c = '!';
    if (ft_strrchr(str, c) == strrchr(str, c))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");

    c = ' ';
    if (ft_strrchr(str, c) == strrchr(str, c))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");

    c = 'z';
    if (ft_strrchr(str, c) == strrchr(str, c))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");

    c = 'a';
    if (ft_strrchr(str, c) == strrchr(str, c))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");

    printf("\n");
}

int main()
{
    test_strrchr();
    return 0;
}