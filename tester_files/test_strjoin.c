#include "../libft.h"

void	test_strjoin()
{
	char *s;
	printf("\033[0;31mft_strjoin:\033[0m");

	s = ft_strjoin("Hello", "World");
	if (strcmp(s, "HelloWorld") != 0)
		printf(" \033[0;31mKO\033[0m");
	else
 		printf(" \033[0;32mOK \033[0m");
	free(s);
	s = ft_strjoin("AAAA", "AAAA");
	if (strcmp(s, "AAAAAAAA") != 0)
		printf("\033[0;31mKO\033[0m");
	else
 		printf("\033[0;32mOK \033[0m");
	free(s);
	s = ft_strjoin("", "");
	if (s[0] != '\0')
		printf("\033[0;31mKO\033[0m");
	else
 		printf("\033[0;32mOK \033[0m");
	free(s);
	printf("\n");

}

int	main()
{
	test_strjoin();
	return 0;
}