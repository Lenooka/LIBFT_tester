#include "../../libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

void    test_lstclear()
{
    t_list  *l;

    printf("\033[0;31mft_lstclear:    \033[0m ");
    l = ft_lstnew(malloc(1));
    ft_lstclear(&l, free);
    if (l != NULL)
        printf(" \033[0;31mKO \033[0m");
    else
        printf("\033[0;32mOK \033[0m");
    printf("\n");
}

int main()
{
    test_lstclear();
    return 0;
}