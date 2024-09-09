#include "../../libft.h"
#include <stdio.h>
#include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

void    test_strchr()
{
    printf("\033[0;31mft_strchr:\033[0m ");
    ft_strchr("Hello", 'H') == strchr("Hello", 'H') ? printf(" \033[0;32mOK \033[0m") : printf(" \033[0;31mKO \033[0m");
    ft_strchr("Hello", 'e') == strchr("Hello", 'e') ? printf("\033[0;32mOK \033[0m") : printf("\033[0;31mKO \033[0m");
    ft_strchr("Hello", 'l') == strchr("Hello", 'l') ? printf("\033[0;32mOK \033[0m") : printf("\033[0;31mKO \033[0m");
    ft_strchr("Hello", 'o') == strchr("Hello", 'o') ? printf("\033[0;32mOK \033[0m") : printf("\033[0;31mKO \033[0m");
    ft_strchr("Hello", 'z') == strchr("Hello", 'z') ? printf("\033[0;32mOK \033[0m") : printf("\033[0;31mKO \033[0m");
    ft_strchr("", 'H') == strchr("", 'H') ? printf("\033[0;32mOK \033[0m") : printf("\033[0;31mKO \033[0m");
    printf("\n");
}

int main()
{
    test_strchr();
    return 0;
}