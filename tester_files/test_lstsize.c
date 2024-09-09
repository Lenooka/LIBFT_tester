#include "../../libft.h"

void    test_lstsize(void)
{
    t_list  *l;
    int     i;

    printf("\033[0;31mft_lstsize:  \033[0m ");
    l = ft_lstnew("hello");
    i = ft_lstsize(l);
    if (i != 1)
        printf(" \033[0;31mKO\033[0m");
    else
        printf("\033[0;32mOK\033[0m");
    ft_lstadd_front(&l, ft_lstnew("world"));
    i = ft_lstsize(l);
    if (i != 2)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    ft_lstadd_front(&l, ft_lstnew("a"));
    i = ft_lstsize(l);
    if (i != 3)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    ft_lstadd_back(&l, ft_lstnew("b"));
    i = ft_lstsize(l);
    if (i != 4)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    printf("\n");
}

int main()
{
    test_lstsize();
    return 0;
}