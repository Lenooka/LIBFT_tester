#include "../../libft.h"

void	test_substr()
{
	char *s;

	printf("\033[0;31mft_substr: \033[0m");

	s = ft_substr("subHello", 3, 5);
	if (strcmp(s, "Hello") != 0)
		printf(" \033[0;31mKO\033[0m");
	else
 		printf(" \033[0;32mOK \033[0m");
	free(s);
	s = ft_substr("subHello", 1, 1);
	if (strcmp(s, "u") != 0)
		printf(" \033[0;31mKO\033[0m");
	else
 		printf("\033[0;32mOK \033[0m");
	free(s);
	s = ft_substr("subHello", 0, 0);
	if (s[0] != '\0')
		printf(" \033[0;31mKO\033[0m");
	else
 		printf("\033[0;32mOK \033[0m");
	s = ft_substr("subHello", 100, 1);
	if (s[0] != '\0')
		printf(" \033[0;31mKO\033[0m");
	else
 		printf("\033[0;32mOK \033[0m");
	free(s);
	s = ft_substr("subHello", 3, 0);
	if (s[0] != '\0')
		printf(" \033[0;31mKO\033[0m");
	else
 		printf("\033[0;32mOK \033[0m");
	free(s);
	s = ft_substr("AAAAAAAAAAAAAA", 4, 4);
	if (strcmp(s, "AAAA") != 0)
		printf(" \033[0;31mKO\033[0m");
	else
 		printf("\033[0;32mOK \033[0m");
	s = ft_substr(NULL, 0, 0);
	if (s[0] != '\0')
		printf(" \033[0;31mKO\033[0m");
	else
 		printf("\033[0;32mOK \033[0m");
	s = ft_substr(NULL, -1, -1);
	if (s[0] != '\0')
		printf(" \033[0;31mKO\033[0m");
	else
 		printf("\033[0;32mOK \033[0m");
	printf("\n");
}

int	main()
{
	test_substr();
	return 0;
}