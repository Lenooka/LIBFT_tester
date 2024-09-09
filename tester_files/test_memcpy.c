#include "../../libft.h"

void    test_memcpy(void)
{
    char    src[10] = "123456789";
    char    dest[10];
    int     i;

    printf("\033[0;31mft_memcpy:\033[0m  ");
    ft_memcpy(dest, src, 10);
    i = 0;
    while (i < 10)
    {
        if (dest[i] != src[i])
        {
            printf(" \033[0;31mKO \033[0m");
            return ;
        }
        i++;
    }
    printf("\033[0;32mOK \033[0m");
    ft_memcpy(dest, src, 0);
    i = 0;
    while (i < 10)
    {
        if (dest[i] != src[i])
        {
            printf(" \033[0;31mKO \033[0m");
            return ;
        }
        i++;
    }
    printf("\033[0;32mOK \033[0m");
    ft_memcpy(dest, src, 5);
    i = 0;
    while (i < 10)
    {
        if (i < 5 && dest[i] != src[i])
        {
            printf(" \033[0;31mKO \033[0m");
            return ;
        }
        if (i >= 5 && dest[i] != src[i])
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
    test_memcpy();
    return 0;
}