#include "../../libft.h"

void    test_lstnew()
{
    t_list  *list;

    printf("\033[0;31mft_lstnew:\033[0m");
    list = ft_lstnew("hello");
    if (strcmp(list->content, "hello") != 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    free(list);
    list = ft_lstnew("world");
    if (strcmp(list->content, "world") != 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    free(list);
    list = ft_lstnew("42");
    if (strcmp(list->content, "42") != 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    printf("\n");
}

int     main()
{
    test_lstnew();
    return (0);
}