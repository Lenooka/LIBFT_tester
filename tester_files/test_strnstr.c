#include "../../libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

char *t_strnstr(const char *s, const char *find, size_t slen)
{
	char c, sc;
	size_t len;

	if ((c = *find++) != '\0') {
		len = strlen(find);
		do {
			do {
				if (slen-- < 1 || (sc = *s++) == '\0')
					return (NULL);
			} while (sc != c);
			if (len > slen)
				return (NULL);
		} while (strncmp(s, find, len) != 0);
		s--;
	}
	return ((char *)s);
}

void    test_strnstr()
{
    char    *s1;
    char    *s2;
    size_t  n;

    printf("\033[0;31mft_strnstr:\033[0m ");
    s1 = "Hello World!";
    s2 = "World";
    n = 5;
    if (ft_strnstr(s1, s2, n) == t_strnstr(s1, s2, n))
        printf("\033[0;32mOK\033[0m");
    else
        printf("\033[0;31mKO\033[0m");
    s1 = "Hello World!";
    s2 = "World";
    n = 6;
    if (ft_strnstr(s1, s2, n) == t_strnstr(s1, s2, n))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    s1 = "Hello World!";
    s2 = "World";
    n = 7;
    if (ft_strnstr(s1, s2, n) == t_strnstr(s1, s2, n))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    s1 = "Hello World!";
    s2 = "World";
    n = 8;
    if (ft_strnstr(s1, s2, n) == t_strnstr(s1, s2, n))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    s1 = "Hello World!";
    s2 = "World";
    n = 9;
    if (ft_strnstr(s1, s2, n) == t_strnstr(s1, s2, n))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    s1 = "";
    s2 = "";
    n = 100;
    if (ft_strnstr(s1, s2, n) == t_strnstr(s1, s2, n))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    s1 = "AAAAAA";
    s2 = "AAA";
    n = 6;
    if (ft_strnstr(s1, s2, n) == t_strnstr(s1, s2, n))
        printf(" \033[0;32mOK\033[0m");
    else
        printf(" \033[0;31mKO\033[0m");
    printf("\n");
}

int main()
{
    test_strnstr();
    return 0;
}