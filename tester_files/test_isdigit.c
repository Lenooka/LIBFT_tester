#include "../../libft.h"


void    test_isdigit(void)
{
    char    c;

    printf("\033[0;31mft_isdigit:\033[0m ");

    c = '0';
    if (ft_isdigit(c) == 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf("\033[0;32mOK\033[0m");
    c = '9';
    if (ft_isdigit(c) == 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = 'a';
    if (ft_isdigit(c) == 1)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = 'z';
    if (ft_isdigit(c) == 1)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = 'A';
    if (ft_isdigit(c) == 1)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = 'Z';
    if (ft_isdigit(c) == 1)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = ' ';
    if (ft_isdigit(c) == 1)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m\n");
}

int main()
{
    test_isdigit();
    return 0;
}