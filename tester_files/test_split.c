#include "../../libft.h"
char	**free_arr(char **str)
{
	int	a;

	a = 0;
	while (str[a] != NULL)
	{
		free(str[a]);
		a++;
	}
	free(str);
	return (NULL);
}

int	arr_strcmp(char **ex, char **res)
{
	int i = 0;

	while (ex[i] || res[i])
	{
		if (strcmp(ex[i], res[i]) != 0)
			return (1);
		i++;
	}
	if (ex[i] != NULL && res[i] != NULL)
		return (1);
	return (0);
}

void	test_split()
{
	char *s = " A B C D ! ";
	char **ex = ((char*[6]){"A", "B", "C", "D", "!", NULL});
	char **res;
	printf("\033[0;31mft_split:  \033[0m");
	res = ft_split(s, ' ');
	if (arr_strcmp(ex, res) != 0)
		printf(" \033[0;31mKO\033[0m");
	else
 		printf(" \033[0;32mOK\033[0m");
	free_arr(res);
	s = "ABCD!  ";
	ex = ((char*[2]){"ABCD!", NULL});
	res = ft_split(s, ' ');
	if (arr_strcmp(ex, res) != 0)
		printf(" \033[0;31mKO\033[0m");
	else
 		printf(" \033[0;32mOK\033[0m");
	free_arr(res);
	s = "";
	ex = ((char*[2]){NULL});
	res = ft_split(s, '\65');
	if (arr_strcmp(ex, res) != 0)
		printf(" \033[0;31mKO\033[0m");
	else
 		printf(" \033[0;32mOK\033[0m");
	free_arr(res);
	s = "A  4B44C4D44!44";
	ex = ((char*[6]){"A  ", "B", "C", "D", "!", NULL});
	res = ft_split(s, '4');
	if (arr_strcmp(ex, res) != 0)
		printf(" \033[0;31mKO\033[0m");
	else
 		printf(" \033[0;32mOK\033[0m");
	free_arr(res);
	res = ft_split(NULL, ' ');
	if (!res)
		printf(" \033[0;32mOK\033[0m");
	else
		printf(" \033[0;31mKO\033[0m");
	printf("\n");
}

int	main()
{
	test_split();
	return 0;
}