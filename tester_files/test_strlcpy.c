#include <stdio.h>
#include <string.h>
#include "../../libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

size_t  t_strlcpy(char *dst, const char *src, size_t dsize)
{
	const char *osrc = src;
	size_t nleft = dsize;

	/* Copy as many bytes as will fit. */
	if (nleft != 0) {
		while (--nleft != 0) {
			if ((*dst++ = *src++) == '\0')
				break;
		}
	}

	/* Not enough room in dst, add NUL and traverse rest of src. */
	if (nleft == 0) {
		if (dsize != 0)
			*dst = '\0';		/* NUL-terminate dst */
		while (*src++)
			;
	}

	return(src - osrc - 1);	/* count does not include NUL */
}

void test_strlcpy()
{
    char dest[100];
    char dest2[100];
    
    printf("\033[0;31mft_strlcpy:\033[0m");
    ft_strlcpy(dest, "Hello, World!", 13);
    t_strlcpy(dest2, "Hello, World!", 13);
    if (strcmp(dest, dest2) != 0)
    {
        printf(" \033[0;31mKO \033[0m");
        return;
    }
    printf(" \033[0;32mOK\033[0m");
    bzero(dest, 100);
    bzero(dest2, 100);
    ft_strlcpy(dest, "Hello, World!", 0);
    t_strlcpy(dest2, "Hello, World!", 0);
    if (strcmp(dest, dest2) != 0)
    {
        printf(" \033[0;31mKO \033[0m");
        return;
    }
    printf(" \033[0;32mOK\033[0m");
    bzero(dest, 100);
    bzero(dest2, 100);
    ft_strlcpy(dest, "Hello, World!", 5);
    t_strlcpy(dest2, "Hello, World!", 5);
    if (strcmp(dest, dest2) != 0)
    {
        printf(" \033[0;31mKO\033[0m");
        return;
    }
    printf(" \033[0;32mOK\033[0m");
    bzero(dest, 100);
    bzero(dest2, 100);
    ft_strlcpy(dest, "", 15);
    t_strlcpy(dest2, "", 15);
    if (strcmp(dest, dest2) != 0)
    {
        printf(" \033[0;31mKO\033[0m");
        return;
    }
    printf(" \033[0;32mOK\033[0m");
    bzero(dest, 100);
    bzero(dest2, 100);
    ft_strlcpy(dest, "Hello, World!", 15);
    t_strlcpy(dest2, "Hello, World!", 15);
    if (strcmp(dest, dest2) != 0)
    {
        printf(" \033[0;31mKO\033[0m\n");
        return;
    }
    printf(" \033[0;32mOK\033[0m");

    printf("\n");
}


int main()
{
    test_strlcpy();
    return 0;
}