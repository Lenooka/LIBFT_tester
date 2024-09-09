#include "../../libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

void    test_strncmp()
{
    int     res;
    int     or;

    printf("\033[0;31mft_strncmp:\033[0m ");
    res = ft_strncmp("Hello", "Hello", 5);
    or = strncmp("Hello", "Hello", 5);
    if (res == or)
        printf("\033[0;32mOK\033[0m");
    else
        printf("\033[0;31mKO\033[0m");

    res = ft_strncmp("Hello", "Hello", 3);
    or = strncmp("Hello", "Hello", 3);
    if (res == or)
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    res = ft_strncmp("Hello", "Hello", 0);
    or = strncmp("Hello", "Hello", 0);
    if (res == or)
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    res = ft_strncmp("Hello", "Hello", 10);
    or = strncmp("Hello", "Hello", 10);
    if (res == or)
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    res = ft_strncmp("", "", 1);
    or = strncmp("", "", 1);
    if (res == or)
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    res = ft_strncmp("Hello", "wwww", 1);
    or = strncmp("Hello", "wwww", 1);
    if (or < 0)
    {
        if (res < 0)
            printf(" \033[0;32mOK\033[0m");
        else
            printf(" \033[0;31mKO\033[0m");
    }
    printf("\n");
}

int main()
{
    test_strncmp();
    return 0;
}