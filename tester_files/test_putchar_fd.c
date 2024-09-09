#include "../../libft.h"
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>


void	test_putchar_fd()
{

	int		fd;

	printf("\033[0;31mft_putchar_fd:\033[0m");
	fd = open("temp", O_RDWR | O_CREAT | O_TRUNC, 0644);
	ft_putchar_fd('a', fd);
	lseek(fd, 0, SEEK_SET);
	char s[10] = {0}; 
	read(fd, s, 2);
	if (strcmp(s, "a") != 0)
		printf(" \033[0;31mKO\033[0m");
	else
		printf(" \033[0;32mOK\033[0m");
	close(fd);
	unlink("temp");
	printf("\n");

}

int	main()
{
	test_putchar_fd();
	return (0);
}