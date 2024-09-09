#include <stdio.h>
#include <string.h>
#include "../../libft.h"


void test_strlcpy()
{
    char dest[100];
    char dest2[100];
    
    printf("\033[0;31mft_strlcpy:\033[0m");
    ft_strlcpy(dest, "Hello, World!", 13);
    strlcpy(dest2, "Hello, World!", 13);
    if (strcmp(dest, dest2) != 0)
    {
        printf(" \033[0;31mKO \033[0m");
        return;
    }
    printf(" \033[0;32mOK\033[0m");
    bzero(dest, 100);
    bzero(dest2, 100);
    ft_strlcpy(dest, "Hello, World!", 0);
    strlcpy(dest2, "Hello, World!", 0);
    if (strcmp(dest, dest2) != 0)
    {
        printf(" \033[0;31mKO \033[0m");
        return;
    }
    printf(" \033[0;32mOK\033[0m");
    bzero(dest, 100);
    bzero(dest2, 100);
    ft_strlcpy(dest, "Hello, World!", 5);
    strlcpy(dest2, "Hello, World!", 5);
    if (strcmp(dest, dest2) != 0)
    {
        printf(" \033[0;31mKO\033[0m");
        return;
    }
    printf(" \033[0;32mOK\033[0m");
    bzero(dest, 100);
    bzero(dest2, 100);
    ft_strlcpy(dest, "", 15);
    strlcpy(dest2, "", 15);
    if (strcmp(dest, dest2) != 0)
    {
        printf(" \033[0;31mKO\033[0m");
        return;
    }
    printf(" \033[0;32mOK\033[0m");
    bzero(dest, 100);
    bzero(dest2, 100);
    ft_strlcpy(dest, "Hello, World!", 15);
    strlcpy(dest2, "Hello, World!", 15);
    if (strcmp(dest, dest2) != 0)
    {
        printf(" \033[0;31mKO\033[0m\n");
        return;
    }
    printf(" \033[0;32mOK\033[0m");

    printf("\n");
}


int main()
{
    test_strlcpy();
    return 0;
}