#include "../../libft.h"

void    test_lstlast()
{
    t_list  *l;
    t_list  *last;

    printf("\033[0;31mft_lstlast:  \033[0m ");
    l = ft_lstnew("hello");
    last = ft_lstlast(l);
    if (last != l)
        printf(" \033[0;31mKO\033[0m");
    else
        printf("\033[0;32mOK\033[0m");
    ft_lstadd_front(&l, ft_lstnew("world"));
    last = ft_lstlast(l);
    if (strcmp(last->content, "hello") != 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    ft_lstadd_front(&l, ft_lstnew("a"));
    last = ft_lstlast(l);
    if (strcmp(last->content, "hello") != 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    ft_lstadd_back(&l, ft_lstnew("b"));
    last = ft_lstlast(l);
    if (strcmp(last->content, "b") != 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    printf("\n");
}

int main()
{
    test_lstlast();
    return 0;
}