#include "../libft.h"

#include <stdio.h>
#include <string.h>
#include <unistd.h> // for write()

#include <stdio.h>
#include <string.h>
#include <unistd.h> // for write()

// Define ft_memset function here or include your libft header
void *ft_memset(void *str, int c, size_t n);

void test_memset(void)
{
    char str[10];

    printf("\033[0;31mft_memset:  \033[0m");

    ft_memset(str, 'a', 10);
    if (memcmp(str, "aaaaaaaaaa", 10) != 0)
        printf("\033[0;31mKO\033[0m\n");
    else
        printf("\033[0;32mOK\033[0m\n");
}



int main()
{
    test_memset();
    return 0;
}