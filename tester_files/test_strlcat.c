#include "../../libft.h"
#include <stdio.h>
#include <string.h>

void    test_strlcat()
{   
    char    dest[100];
    char    dest2[100];
    
    printf("\033[0;31mft_strlcat:\033[0m");
    bzero(dest, 100);
    bzero(dest2, 100);
    ft_strlcat(dest, "Hello, World!", 13);
    strlcat(dest2, "Hello, World!", 13);
    if (strcmp(dest, dest2) != 0)
    {
        printf(" \033[0;31mKO \033[0m");
    }
    printf(" \033[0;32mOK\033[0m");
    bzero(dest, 100);
    bzero(dest2, 100);
    ft_strlcat(dest, "Hello, World!", 0);
    strlcat(dest2, "Hello, World!", 0);
    if (strcmp(dest, dest2) != 0)
    {
        printf(" \033[0;31mKO \033[0m");
    }
    printf(" \033[0;32mOK\033[0m");
    bzero(dest, 100);
    bzero(dest2, 100);
    ft_strlcat(dest, "Hello, World!", 5);
    strlcat(dest2, "Hello, World!", 5);
    if (strcmp(dest, dest2) != 0)
    {
        printf(" \033[0;31mKO\033[0m");
    }
    printf(" \033[0;32mOK\033[0m");
    bzero(dest, 100);
    bzero(dest2, 100);
    ft_strlcat(dest, "", 15);
    strlcat(dest2, "", 15);
    if (strcmp(dest, dest2) != 0)
    {
        printf(" \033[0;31mKO\033[0m");
    }
    printf(" \033[0;32mOK\033[0m");
    printf("\n");
}

int main()
{
    test_strlcat();
    return 0;
}
