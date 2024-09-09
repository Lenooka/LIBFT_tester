#include "../../libft.h"

char	f_formapi(unsigned int i, char c)
{
	i = i + 1;
	c = c + 1;
	return (c);
}


void	test_strmapi()
{
	char *fs;
	char *s;
	unsigned int i = 0;
	printf("\033[0;31mft_strmapi:\033[0m");
	fs = strdup("hello");
	s = strdup("hello");
	while (fs[i])
	{
		fs[i] = f_formapi(i, fs[i]);
		i++;
	}
	s = ft_strmapi(s, f_formapi);
	if (strcmp(s, fs) != 0)
		printf(" \033[0;31mKO\033[0m");
	else
 		printf(" \033[0;32mOK \033[0m");
	free(fs);
	free(s);
	i = 0;
	fs = strdup("AAA");
	s = strdup("AAA");
	while (fs[i])
	{
		fs[i] = f_formapi(i, fs[i]);
		i++;
	}
	s = ft_strmapi(s, f_formapi);
	if (strcmp(s, fs) != 0)
		printf("\033[0;31mKO\033[0m");
	else
 		printf("\033[0;32mOK \033[0m");
	free(fs);
	free(s);


	printf("\n");
}


int	main()
{
	test_strmapi();
}