#!/bin/bash


mkdir -p exec
echo -e "\n"
echo -e "\033[0;33mLIBFT TESTER\033[0m\n"
echo -e "\033[0;33mCompiling libft...\033[0m\n"
cd ..
make re > /dev/null 2>&1
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile libft. Exiting.\033[0m"
    exit 1
fi
cd tester
cd tester_files
echo -e "\033[0;33mFIRST PART\033[0m\n"
cd tester_files
cc -Wall -Wextra -Werror -I.. -o exec/test_isalpha test_isalpha.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_isalpha. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_isalpha
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror -I.. -o exec/test_isdigit test_isdigit.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_isdigit. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_isdigit
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror -I.. -o exec/test_isascii test_isascii.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_isascii. Exiting.\033[0m"
    exit 1
fi


cd tester_files
cc -Wall -Wextra -Werror -I.. -o exec/test_isalum test_isalum.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_isalum. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_isalum
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd ..
./exec/test_isascii
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror -I.. -o exec/test_isprint test_isprint.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_isprint. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_isprint
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror -I.. -o exec/test_strlen test_strlen.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_strlen.c Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_strlen
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror -I.. -o exec/test_memset test_memset.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_memset. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_memset
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror -I.. -o exec/test_bzero test_bzero.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_bzero. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_bzero
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror -I.. -o exec/test_memcpy test_memcpy.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_memcpy. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_memcpy
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror -I.. -o exec/test_memmove test_memove.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_memmove. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_memmove
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror -I..  -o exec/test_strlcpy test_strlcpy.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_strlcpy. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_strlcpy
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_strlcat test_strlcat.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_strlcat. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_strlcat
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_toupper test_toupper.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_toupper. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_toupper
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_tolower test_tolower.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_tolower. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_tolower
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_strchr test_strchr.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_strchr. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_strchr
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_strrchr test_strrchr.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_strrchr. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_strrchr
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_strncmp test_strncmp.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_strncmp. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_strncmp
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_memchr test_memchr.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_memchr. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_memchr
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_memcmp test_memcmp.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_memcmp. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_memcmp
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror -I.. -o exec/test_strnstr test_strnstr.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_strnstr. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_strnstr
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_atoi test_atoi.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_atoi. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_atoi
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_calloc test_calloc.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_calloc. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_calloc
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_strdup test_strdup.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_strdup. Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_strdup
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

echo -e "\n"
echo -e "\033[0;33mSECOND PART\033[0m\n"

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_substr test_substr.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_substr.c Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_substr
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi


cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_strjoin test_strjoin.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_strjoin.c Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_strjoin
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_strtrim test_strtrim.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_strtrim.c Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_strtrim
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_split test_split.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_split.c Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_split
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_itoa test_itoa.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_itoa.c Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_itoa
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_strmapi test_strmapi.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_strmapi.c Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_strmapi
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_striteri test_striteri.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_striteri.c Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_striteri
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_putchar_fd test_putchar_fd.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_putchar_fd Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_putchar_fd
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_putstr_fd test_putstr_fd.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_putstr_fd Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_putstr_fd
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_putendl_fd test_putendl_fd.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_putendl_fd Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_putendl_fd
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_putnbr_fd test_putnbr_fd.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_putnbr_fd Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_putnbr_fd
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi


echo -e "\n"
echo -e "\033[0;33mBONUS\033[0m\n"
cd ..
make bonus > /dev/null 2>&1
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mNO BONUS, OH WELL.\033[0m"
    make fclean > /dev/null 2>&1
    echo -e "\n"
    echo -e "\033[0;33mKEEP UP THE GOOD WORK :) \033[0m\n"
    exit 1
fi
cd tester

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_lstnew test_lstnew.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_lstnew.c Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_lstnew
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_lstadd_front test_lstadd_front.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_lstadd_front.c Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_lstadd_front
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_lstsize test_lstsize.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_lstsize.c Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_lstsize
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror  -I.. -o exec/test_lstlast test_lstlast.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_lstlast.c Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_lstlast
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror -I.. -o exec/test_lstadd_back test_lstadd_back.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_lstadd_back.c Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_lstadd_back
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror -I.. -o exec/test_lstdelone test_lstdelone.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_lstdelone.c Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_lstdelone
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror -I.. -o exec/test_lstclear test_lstclear.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_lstclear.c Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_lstclear
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror -I.. -o exec/test_lstiter test_lstiter.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_lstiter.c Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_lstiter
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

cd tester_files
cc -Wall -Wextra -Werror -I.. -o exec/test_lstmap test_lstmap.c -L.. -lft
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mFailed to compile test_lstmap.c Exiting.\033[0m"
    exit 1
fi

cd ..
./exec/test_lstmap
if [ $? -ne 0 ]; then
    echo -e "\033[0;31mTest execution failed.\033[0m"
    exit 1
fi

echo -e "\n"
cd ..
make fclean > /dev/null 2>&1
echo -e "\033[0;33mKEEP UP THE GOOD WORK :) \033[0m\n"
cd tester
