#include "../libft.h"

void    test_calloc()
{
    char    *str;
    char    *str2;
 

    printf("\033[0;31mft_calloc: \033[0m ");
    str = ft_calloc(1, 1);
    if (str[0] == 0)
        printf("\033[0;32mOK\033[0m");
    else
        printf("\033[0;31mKO\033[0m");
    free(str);
    str = ft_calloc(1, 2);
    if (str[0] == 0 && str[1] == 0)
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    free(str);
    str = ft_calloc(2, 1);
    if (str[0] == 0 && str[1] == 0)
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    free(str);
    str = ft_calloc(2, 2);
    if (str[0] == 0 && str[1] == 0 && str[2] == 0 && str[3] == 0)
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    free(str);
    str = ft_calloc(1, 100);
    str2 = calloc(1, 100);
    if (strlen(str) == ft_strlen(str2))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    free(str);
    free(str2);
    str = ft_calloc(1000000, 1);
    str2 = calloc(1000000, 1);
    if (strlen(str) == strlen(str2))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    free(str);
    free(str2);
    printf("\n");
}

int main()
{
    test_calloc();
    return 0;
}