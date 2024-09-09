#include "../../libft.h"
void    ft_lstiter_test(void *elem)
{
    *(int *)elem += 1;
}


void    test_lstiter()
{
    int tab[] = {0, 1, 2, 3};
    t_list  *l;

    printf("\033[0;31mft_lstiter:    \033[0m ");
    l = ft_lstnew(tab);
    ft_lstadd_back(&l, ft_lstnew(tab + 1));
    ft_lstadd_back(&l, ft_lstnew(tab + 2));
    ft_lstadd_back(&l, ft_lstnew(tab + 3));
    ft_lstiter(l, &ft_lstiter_test);
    if (*(int *)l->content != 1 || *(int *)l->next->content != 2 || *(int *)l->next->next->content != 3 || *(int *)l->next->next->next->content != 4)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    free(l->next->next->next);
    free(l->next->next);
    free(l->next);
    free(l);
    printf("\n");
}

int main()
{
    test_lstiter();
    return 0;
}