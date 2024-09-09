#include "../../libft.h"
void    test_isalum(void)
{
    char    c;

    printf("\033[0;31mft_isalum: \033[0m ");

    c = 'a';
    if (ft_isalnum(c) == 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf("\033[0;32mOK\033[0m");
    c = 'z';
    if (ft_isalnum(c) == 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = 'Z';
    if (ft_isalnum(c) == 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = '0';
    if (ft_isalnum(c) == 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = '9';
    if (ft_isalnum(c) == 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = ' ';
    if (ft_isalnum(c) == 1)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = '!';
    if (ft_isalnum(c) == 1)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = 'a' - 1;
    if (ft_isalnum(c) == 1)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m\n");
}


int main()
{
    test_isalum();
    return 0;
}