#include "../libft.h"
static int a = 0;


void	del(void *c)
{
	free(c);
	a = a + 1;
}

void    test_lstdelone()
{
    t_list  *l;
	char	*aa;

    printf("\033[0;31mft_lstdelone:   \033[0m ");
    aa = malloc(sizeof(char) * 5);
	l = ft_lstnew(aa);
    ft_lstdelone(l, del);
    if (a == 0)
       printf("\033[0;31mKO \033[0m");
    else
        printf("\033[0;32mOK \033[0m");
    printf("\n");
}

int main()
{
    test_lstdelone();
    return 0;
}