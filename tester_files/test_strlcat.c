#include "../../libft.h"
#include <stdio.h>
#include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

size_t  t_strlcat(char *dst, const char *src, size_t dsize)
{
	const char *odst = dst;
	const char *osrc = src;
	size_t n = dsize;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end. */
	while (n-- != 0 && *dst != '\0')
		dst++;
	dlen = dst - odst;
	n = dsize - dlen;

	if (n-- == 0)
		return(dlen + strlen(src));
	while (*src != '\0') {
		if (n != 0) {
			*dst++ = *src;
			n--;
		}
		src++;
	}
	*dst = '\0';

	return(dlen + (src - osrc));	/* count does not include NUL */
}

void    test_strlcat()
{   
    char    dest[100];
    char    dest2[100];
    
    printf("\033[0;31mft_strlcat:\033[0m");
    bzero(dest, 100);
    bzero(dest2, 100);
    ft_strlcat(dest, "Hello, World!", 13);
    t_strlcat(dest2, "Hello, World!", 13);
    if (strcmp(dest, dest2) != 0)
    {
        printf(" \033[0;31mKO \033[0m");
    }
    printf(" \033[0;32mOK\033[0m");
    bzero(dest, 100);
    bzero(dest2, 100);
    ft_strlcat(dest, "Hello, World!", 0);
    t_strlcat(dest2, "Hello, World!", 0);
    if (strcmp(dest, dest2) != 0)
    {
        printf(" \033[0;31mKO \033[0m");
    }
    printf(" \033[0;32mOK\033[0m");
    bzero(dest, 100);
    bzero(dest2, 100);
    ft_strlcat(dest, "Hello, World!", 5);
    t_strlcat(dest2, "Hello, World!", 5);
    if (strcmp(dest, dest2) != 0)
    {
        printf(" \033[0;31mKO\033[0m");
    }
    printf(" \033[0;32mOK\033[0m");
    bzero(dest, 100);
    bzero(dest2, 100);
    ft_strlcat(dest, "", 15);
    t_strlcat(dest2, "", 15);
    if (strcmp(dest, dest2) != 0)
    {
        printf(" \033[0;31mKO\033[0m");
    }
    printf(" \033[0;32mOK\033[0m");
    printf("\n");
}

int main()
{
    test_strlcat();
    return 0;
}
