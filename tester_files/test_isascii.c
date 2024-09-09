#include "../../libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>


void    test_isacii(void)
{
    char    c;

    printf("\033[0;31mft_isascii:\033[0m ");
    c = 0;
    if (ft_isascii(c) == 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf("\033[0;32mOK\033[0m");
    c = 126;
    if (ft_isascii(c) == 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = 'a';
    if (ft_isascii(c) == 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    c = 32;
    if (ft_isascii(c) == 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m\n");
}

int main()
{
    test_isacii();
    return 0;
}

