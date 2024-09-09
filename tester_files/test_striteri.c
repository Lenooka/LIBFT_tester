#include "libft.h"

void	f_foriteri(unsigned int i, char *c)
{
	*c = i + '0';

}

void	test_striteri()
{
	char *fs;
	char *s;
	unsigned int i = 0;
	printf("\033[0;31mft_striteri:   \033[0m");
	fs = strdup("hello");
	s = strdup("hello");
	while (fs[i])
	{
		f_foriteri(i, fs + i);
		i++;
	}
	ft_striteri(s, f_foriteri);
	if (strcmp(s, fs) != 0)
		printf(" \033[0;31mKO\033[0m");
	else
 		printf("\033[0;32mOK \033[0m");
	free(fs);
	free(s);
	i = 0;
	fs = strdup("AAA");
	s = strdup("AAA");
	while (fs[i])
	{
		f_foriteri(i, fs + i);
		i++;
	}
	ft_striteri(s, f_foriteri);
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
	test_striteri();
}