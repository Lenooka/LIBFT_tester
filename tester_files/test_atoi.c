#include "../../libft.h"

void    test_atoi(void)
{
    char    *str;

    printf("\033[0;31mft_atoi:   \033[0m ");
    str = "0";
    if (ft_atoi(str) == 0)
        printf("\033[0;32mOK\033[0m");
    else
        printf("\033[0;31mKO\033[0m");
    str = "1";
    if (ft_atoi(str) == 1)
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    str = "-1";
    if (ft_atoi(str) == -1)
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    str = "2147483647";
    if (ft_atoi(str) == 2147483647)
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    str = "-2147483648";
    if (ft_atoi(str) == -2147483648)
        printf(" \033[0;32mOK\033[0m");
    else
    {
        printf(" \033[0;31mKO\033[0m");
    }
    str = "1-1";

	if (ft_atoi(str) == 1)
		printf(" \033[0;32mOK\033[0m");
	else
		printf(" \033[0;31mKO\033[0m");
	str = "+1aaaa";
	if (ft_atoi(str) == 1)
		printf(" \033[0;32mOK\033[0m");
	else
		printf(" \033[0;31mKO\033[0m");
	str = "  1";
	if (ft_atoi(str) == atoi(str))
		printf(" \033[0;32mOK\033[0m");
	else
		printf(" \033[0;31mKO\033[0m");
	str = "  --1";
	if (ft_atoi(str) == atoi(str))
		printf(" \033[0;32mOK\033[0m");
	else
		printf(" \033[0;31mKO\033[0m");
	str = "  -+1";
	if (ft_atoi(str) == atoi(str))
		printf(" \033[0;32mOK\033[0m");
	else
		printf(" \033[0;31mKO\033[0m");
    printf("\n");
}

int main()
{
    test_atoi();
    return 0;
}