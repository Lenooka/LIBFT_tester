#include "../../libft.h"


void    test_toupper()
{
    char    c;

    printf("\033[0;31mft_toupper:\033[0m ");

    c = 'a';
    if (ft_toupper(c) == 'A')
        printf("\033[0;32mOK\033[0m");
    else
        printf("\033[0;31mKO\033[0m");
    c = 'z';
    if (ft_toupper(c) == 'Z')
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    c = 'A';
    if (ft_toupper(c) == 'A')
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    c = 'Z';
    if (ft_toupper(c) == 'Z')
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    c = '0';
    if (ft_toupper(c) == '0')
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    c = '9';
    if (ft_toupper(c) == '9')
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    c = ' ';
    if (ft_toupper(c) == ' ')
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    c = '!';
    if (ft_toupper(c) == '!')
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    printf("\n");
}

int main()
{
    test_toupper();
    return 0;
}