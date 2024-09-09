#include "libft.h"

void test_lstadd_front()
{
    t_list *l;
    printf("\033[0;31mft_ft_lstadd_front:\033[0m");
    l = ft_lstnew("hello");
    ft_lstadd_front(&l, ft_lstnew("world"));
    if (strcmp(l->content, "world") != 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    free(l->next);
    free(l);
    l = ft_lstnew("a");
    ft_lstadd_front(&l, ft_lstnew("b"));
    if (strcmp(l->content, "b") != 0)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    printf("\n");
}

int main()
{
    test_lstadd_front();
    return (0);
}