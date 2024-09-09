#include "../../libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

void   test_bzero(void)
{
    char    str[10];
    int     i;

    printf("\033[0;31mft_bzero:\033[0m   ");
    ft_bzero(str, 10);
    i = 0;
    while (i < 10)
    {
        if (str[i] != 0)
        {
            printf(" \033[0;31mKO \033[0m\n");
            return ;
        }
        i++;
    }
    printf("\033[0;32mOK \033[0m");
    ft_bzero(str, 0);
    i = 0;
    while (i < 10)
    {
        if (str[i] != 0)
        {
            printf(" \033[0;31mKO \033[0m\n");
            return ;
        }
        i++;
    }
    printf("\033[0;32mOK \033[0m");
    ft_bzero(str, 5);
    i = 0;
    while (i < 10)
    {
        if (i < 5 && str[i] != 0)
        {
            printf(" \033[0;31mKO \033[0m\n");
            return ;
        }
        if (i >= 5 && str[i] != 0)
        {
            printf(" \033[0;31mKO \033[0m\n");
            return ;
        }
        i++;
    }
    printf("\033[0;32mOK \033[0m\n");
}

int main()
{
    test_bzero();
    return 0;
}