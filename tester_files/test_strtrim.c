#include "../../libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

void	test_strtrim()
{
	char *s;

	printf("\033[0;31mft_strtrim:\033[0m");
	s = ft_strtrim("setHelloset", "set");
	if (strcmp(s, "Hello") != 0)
		printf(" \033[0;31mKO\033[0m");
	else
 		printf(" \033[0;32mOK\033[0m");
	free(s);
	s = ft_strtrim("", "");
	if (strcmp(s, "") != 0)
		printf(" \033[0;31mKO\033[0m");
	else
 		printf(" \033[0;32mOK\033[0m");
	free(s);
	s = ft_strtrim("a", "");
	if (strcmp(s, "a") != 0)
		printf(" \033[0;31mKO\033[0m");
	else
 		printf(" \033[0;32mOK\033[0m");
	free(s);
	s = ft_strtrim("a", "a");
	if (strcmp(s, "") != 0)
		printf(" \033[0;31mKO\033[0m");
	else
 		printf(" \033[0;32mOK\033[0m");
	free(s);
	s = ft_strtrim("aaaaaaaaaaaWHATa", "a");
	if (strcmp(s, "WHAT") != 0)
		printf(" \033[0;31mKO\033[0m");
	else
 		printf(" \033[0;32mOK\033[0m");
	free(s);	
	printf("\n");
}

int	main()
{
	test_strtrim();
	return 0;
}