# LIBFT_tester
A simple tester for the 42 Libft project. Testing with basic input cases, ensuring the library functions are working as expected.



# Usage

### 1. Clone the repository in the root of LIBFT
```bash
git clone https://github.com/Lenooka/LIBFT_tester.git
```

### 2. Navigate to the tester directory
```bash
cd LIBFT_tester
```
### 3. Run the test script
```bash
./tester.sh
```
### Note for Linux
On Linux, you might need to add #include <bsd/string.h> to your libft.h file to ensure compatibility with certain string functions. This is required because functions like strlcat and strlcpy are found in the BSD library on Linux systems.

To do this, include the following line at the top of your libft.h file:

```bash
#include <bsd/string.h>
```
And run test script
```bash
./tester_linux.sh
```

<img width="437" alt="TESTERIMG" src="https://github.com/user-attachments/assets/689fa467-745f-4706-9423-fdeded06ab6d">

### And one more...
This tester provides basic coverage and is not exhaustive. It is highly recommended to write your own additional tests to thoroughly verify your Libft implementation. Testing is an essential part of learning and developing and bla bla bla, so

### Good luck and have fun coding!
