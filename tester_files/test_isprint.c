#include "../../libft.h"


void    test_isprint()
{
    char    c;

    printf("\033[0;31mft_isprint:\033[0m ");

    c = 32;
    if (ft_isprint(c) == 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf("\033[0;32mOK\033[0m");
    c = 126;
    if (ft_isprint(c) == 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = 31;
    if (ft_isprint(c) == 1)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = 127;
    if (ft_isprint(c) == 1)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m\n");
}

int main()
{
    test_isprint();
    return 0;
}