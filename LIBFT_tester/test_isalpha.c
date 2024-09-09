#include "../libft.h"


void    test_isalpha(void)
{
    char    c;

    printf("\033[0;31mft_isalpha:\033[0m ");


    c = 'a';
    if (ft_isalpha(c) == 0)
       printf(" \033[0;31mKO\033[0m");
    else
        printf("\033[0;32mOK\033[0m");
    c = 'z';
    if (ft_isalpha(c) == 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = 'Z';
    if (ft_isalpha(c) == 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = '0';
    if (ft_isalpha(c) == 1)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = '9';
    if (ft_isalpha(c) == 1)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = ' ';
    if (ft_isalpha(c) == 1)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = '!';
    if (ft_isalpha(c) == 1)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = 'a' - 1;
    if (ft_isalpha(c) == 1)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = 'z' + 1;
    if (ft_isalpha(c) == 1)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = 'A' - 1;
    if (ft_isalpha(c) == 1)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = 'Z' + 1;
    if (ft_isalpha(c) == 1)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m\n");
}

int     main(void)
{
    test_isalpha();
    return (0);
}