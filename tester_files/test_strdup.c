#include "../../libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

void    test_strdup()
{
    char    *str;
    char    *str2;

    printf("\033[0;31mft_strdup: \033[0m ");
    str = "Hello World!";
    str2 = ft_strdup(str);
    if (strcmp(str, str2) == 0)
        printf("\033[0;32mOK\033[0m");
    else
        printf("\033[0;31mKO\033[0m");
    free(str2);
    str = "";
    str2 = ft_strdup(str);
    if (strcmp(str, str2) == 0)
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    free(str2);
    str = " ";
    str2 = ft_strdup(str);
    if (strcmp(str, str2) == 0)
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    free(str2);
    str = "1234567890";
    str2 = ft_strdup(str);
    if (strcmp(str, str2) == 0)
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    free(str2);

    printf("\n");
}

int main()
{
    test_strdup();
    return 0;
}