#include "../../libft.h"

void    test_strlen()
{
    char    *str;

    printf("\033[0;31mft_strlen:\033[0m  ");

    str = "Hello";
    if (ft_strlen(str) != 5)
        printf(" \033[0;31mKO\033[0m");
    else
        printf("\033[0;32mOK\033[0m");
    str = "";
    if (ft_strlen(str) != 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    str = "Hello World!";
    if (ft_strlen(str) != 12)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    str = "Hello World!\n";
    if (ft_strlen(str) != 13)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    str = "Hello World!\n\n";
    if (ft_strlen(str) != 14)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    str = "Hello World!\n\n\n";
    if (ft_strlen(str) != 15)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m\n");
    
}

int main()
{
    test_strlen();
    return 0;
}