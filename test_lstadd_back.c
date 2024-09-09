#include "../libft.h"

void    test_lstadd_back()
{
    t_list  *l;
    t_list  *new;

    printf("\033[0;31mft_lstadd_back: \033[0m ");
    l = ft_lstnew("hello");
    new = ft_lstnew("world");
    ft_lstadd_back(&l, new);
    if (l->next != new)
        printf(" \033[0;31mKO \033[0m");
    else
        printf("\033[0;32mOK \033[0m");
    free(l->next);
    free(l);
    l = ft_lstnew("a");
    new = ft_lstnew("b");
    ft_lstadd_back(&l, new);
    if (l->next != new)
        printf(" \033[0;31mKO \033[0m");
    else
        printf("\033[0;32mOK \033[0m");
    printf("\n");
}

int main()
{
    test_lstadd_back();
    return 0;
}