# The RStrip Function in C

## Introduction
This script is part of the exercises in the Data Structures in C Course, a part of the C Programming for Everybody Specialization at [Coursera](https://www.coursera.org/) under the tutelage of [Charles Russel Severance](http://www.dr-chuck.com/)

Through the C Programming for Everybody Specialiazation Course, I intend to gain mastery in progrmming.

## A Function the removes extra space from the right
This program will read a line of character array (or string as called in other programming languages) and remove any extra spaces that exist at the right i.e. at the end of the text. 

We write a function named `py_rstrip()` which accepts a character array as argument and removes any extra spaces that exist from the right. The function has no return value and does not use any global variables. The modified character array should be passed out of the function using call by location i.e. using pointers.

On our local machine, we create a file and name it `rstrip-in-c.c` using the following bash command
```bash
touch rstrip-in-c.c
```
Inside our `rstrip-in-c.c` file, we write the following codes
```C
#include <stdio.h>
#include <string.h>
int main() {
    char s1[] = "   Hello   World    ";
    void py_rstrip();
    py_rstrip(s1);
    printf("-%s-\n", s1);
}

void py_rstrip(char *inp){
    int len = strlen(inp);
    int start = len - 1;
    int i;
    for(i = start; i > 0; i --){
        if(inp[i] == ' '){
            inp[i] = '\0';
        } else break;
    }
    
}
```

In the above code snippet, there are two functions `main()` and `py_rstrip()`. The `py_rstrip()` function receives the character array, if the character before the terminator `'\0'` is a blank space, it is popped out of the character array. This is repeated until the character before the terminator is not a blank space.

To compile our script, we use the following bash command
```bash
gcc -ansi rstrip-in-c.c -o rstrip-in-c
```
The above command will produce an executable file named `rstrip-in-c` in the same directory as our `rstrip-in-c.c` file upon successful compilation. 

In order to test the functionality of our C program, we run the following command
```bash
./rstrip-in-c
```

The expected result is 
```
-   Hello   World-
```


## Authors
Nengak Emmanuel Goltong 

[@NengakGoltong](https://twitter.com/nengakgoltong) 
[@nengakgoltong](https://www.linkedin.com/in/nengak-goltong-81009b200)

Under the tutelage of 

Charles Russel Severance
[@drchuck](https://twitter.com/drchuck)
[@charlesseverance](https://www.linkedin.com/in/charlesseverance)

## License
This project is licensed under the MIT License - see the LICENSE.md file for details