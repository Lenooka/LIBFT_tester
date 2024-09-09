#include "../libft.h"

void	test_itoa()
{
	char *s;
	
	printf("\033[0;31mft_itoa:   \033[0m");
	s = ft_itoa(0);
	if (strcmp(s, "0") != 0)
		printf(" \033[0;31mKO\033[0m");
	else
 		printf(" \033[0;32mOK\033[0m");
	free(s);
	s = ft_itoa(-2147483648);
	if (strcmp(s, "-2147483648") != 0)
		printf(" \033[0;31mKO\033[0m");
	else
 		printf(" \033[0;32mOK\033[0m");
	free(s);
	s = ft_itoa(-13);
	if (strcmp(s, "-13") != 0)
		printf(" \033[0;31mKO\033[0m");
	else
 		printf(" \033[0;32mOK\033[0m");
	free(s);
	s = ft_itoa(-0);
	if (strcmp(s, "0") != 0)
		printf(" \033[0;31mKO\033[0m");
	else
 		printf(" \033[0;32mOK\033[0m");
	free(s);
	printf("\n");
}

int	main()
{
	test_itoa();
	return (0);
}