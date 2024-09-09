#include "../libft.h"

void test_memmove(void)
{
    char    str[10];
    char    str2[10];
    int     i;

    printf("\033[0;31mft_memmove:\033[0m ");
    ft_bzero(str, 10);
    ft_bzero(str2, 10);
    ft_memmove(str, "Hello", 5);
    memmove(str2, "Hello", 5);
    i = 0;
    while (i < 10)
    {
        if (str[i] != str2[i])
        {
            printf(" \033[0;31mKO \033[0m");
            return ;
        }
        i++;
    }
    printf("\033[0;32mOK \033[0m");
    ft_memmove(str, "Hello", 0);
    memmove(str2, "Hello", 0);
    i = 0;
    while (i < 10)
    {
        if (str[i] != str2[i])
        {
            printf(" \033[0;31mKO \033[0m\n");
            return ;
        }
        i++;
    }
    printf("\033[0;32mOK \033[0m");
    ft_memmove(str, "Hello", 3);
    memmove(str2, "Hello", 3);
    i = 0;
    while (i < 10)
    {
        if (i < 3 && str[i] != str2[i])
        {
            printf(" \033[0;31mKO \033[0m");
            return ;
        }
        if (i >= 3 && str[i] != str2[i])
        {
            printf(" \033[0;31mKO \033[0m");
            return ;
        }
        i++;
    }
    printf("\033[0;32mOK \033[0m\n");
}

int main()
{
    test_memmove();
    return 0;
}