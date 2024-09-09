#include "../libft.h"


void    test_tolower()
{
    char    c;

    printf("\033[0;31mft_tolower:\033[0m ");

    c = 'a';
    if (ft_tolower(c) == 'a')
        printf("\033[0;32mOK\033[0m");
    else
        printf("\033[0;31mKO\033[0m");
    c = 'z';
    if (ft_tolower(c) == 'z')
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    c = 'A';
    if (ft_tolower(c) == 'a')
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    c = 'Z';
    if (ft_tolower(c) == 'z')
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    c = '0';
    if (ft_tolower(c) == '0')
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    c = '9';
    if (ft_tolower(c) == '9')
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    c = ' ';
    if (ft_tolower(c) == ' ')
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    c = '!';
    if (ft_tolower(c) == '!')
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    printf("\n");
}

int main()
{
    test_tolower();
    return 0;
}