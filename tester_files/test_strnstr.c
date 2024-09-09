#include "../../libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

void    test_strnstr()
{
    char    *s1;
    char    *s2;
    size_t  n;

    printf("\033[0;31mft_strnstr:\033[0m ");
    s1 = "Hello World!";
    s2 = "World";
    n = 5;
    if (ft_strnstr(s1, s2, n) == strnstr(s1, s2, n))
        printf("\033[0;32mOK\033[0m");
    else
        printf("\033[0;31mKO\033[0m");
    s1 = "Hello World!";
    s2 = "World";
    n = 6;
    if (ft_strnstr(s1, s2, n) == strnstr(s1, s2, n))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    s1 = "Hello World!";
    s2 = "World";
    n = 7;
    if (ft_strnstr(s1, s2, n) == strnstr(s1, s2, n))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    s1 = "Hello World!";
    s2 = "World";
    n = 8;
    if (ft_strnstr(s1, s2, n) == strnstr(s1, s2, n))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    s1 = "Hello World!";
    s2 = "World";
    n = 9;
    if (ft_strnstr(s1, s2, n) == strnstr(s1, s2, n))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    s1 = "";
    s2 = "";
    n = 100;
    if (ft_strnstr(s1, s2, n) == strnstr(s1, s2, n))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    s1 = "AAAAAA";
    s2 = "AAA";
    n = 6;
    if (ft_strnstr(s1, s2, n) == strnstr(s1, s2, n))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    printf("\n");
}

int main()
{
    test_strnstr();
    return 0;
}