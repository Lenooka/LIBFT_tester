#include "../../libft.h"

void    test_memcmp()
{
    char    *s1;
    char    *s2;

    printf("\033[0;31mft_memcmp: \033[0m ");
    s1 = "Hello";
    s2 = "Hello";
    if (ft_memcmp(s1, s2, 5) == 0)
        printf("\033[0;32mOK\033[0m");
    else
        printf("\033[0;31mKO\033[0m");
    s1 = "Hello";
    s2 = "Hello";
    if (ft_memcmp(s1, s2, 3) == 0)
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    s1 = "Hello";
    s2 = "Hello";
    if (ft_memcmp(s1, s2, 0) == 0)
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    s1 = "Hello";
    s2 = "Hello";
    if (ft_memcmp(s1, s2, 1) == 0)
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    s1 = "Hello";
    s2 = "Hello";
    if (ft_memcmp(s1, s2, 6) == 0)
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    s1 = "Hello";
    s2 = "Hello";
    if (ft_memcmp(s1, s2, 7) == 0)
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m\n");
    s1 = "Hello";
    s2 = "Hewwo";
    if (ft_memcmp(s1, s2, 1) == memcmp(s1, s2, 1))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m\n");
    s1 = "";
    s2 = "";
    if (ft_memcmp(s1, s2, 1) == memcmp(s1, s2, 1))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m\n");
    s1 = "Hello";
    s2 = "";
    if (ft_memcmp(s1, s2, 1) == memcmp(s1, s2, 1))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m\n");
    s1 = "";
    s2 = "Hello";
    if (ft_memcmp(s1, s2, 1) == memcmp(s1, s2, 1))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m\n");
    s1 = "Hello";
    s2 = "Aaaaaaaaaaa";
    if (ft_memcmp(s1, s2, 1) == memcmp(s1, s2, 1))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m\n");
    printf("\n");
}

int main()
{
    test_memcmp();
    return 0;
}