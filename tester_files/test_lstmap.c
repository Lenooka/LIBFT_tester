#include "../libft.h"

void    *ft_lstmapi_test(void *elem)
{
    *(int *)elem += 1;
    return (elem);
}


void    test_lstmap()
{
    t_list  *l;
    t_list  *new;
    int tab[] = {0, 1, 2, 3};

    printf("\033[0;31mft_lstmap:     \033[0m ");
    l = ft_lstnew(tab);
    ft_lstadd_back(&l, ft_lstnew(tab + 1));
    ft_lstadd_back(&l, ft_lstnew(tab + 2));
    ft_lstadd_back(&l, ft_lstnew(tab + 3));
    new = ft_lstmap(l, &ft_lstmapi_test, &free);
    if (*(int *)new->content != 1 || *(int *)new->next->content != 2 || *(int *)new->next->next->content != 3 || *(int *)new->next->next->next->content != 4)
        printf(" \033[0;31mKO\033[0m");
    else
        printf(" \033[0;32mOK\033[0m");
    free(new->next->next->next);
    free(new->next->next);
    free(new->next);
    free(new);
    free(l->next->next->next);
    free(l->next->next);
    free(l->next);
    free(l);
    printf("\n");
}

int main()
{
    test_lstmap();
    return 0;
}