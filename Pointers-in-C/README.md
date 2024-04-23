# Using Pointers in C

## Introduction
This exercise is part of my learning how to gain programming mastery through the Data Structures in C Course, as part of the C Programming for Everybody Specialization at [Coursera](https://www.coursera.org/) under the tutelage of [Charles Russel Severance](http://www.dr-chuck.com/)

## Calculating Employee Pay Using Pointers
This program will read an un-specified number of employee time records from an input, `input.txt` in our case. Each time record will contain an employee number (integer), an employee rate per hour (float) and number of hours worked (float). We shall give the employee time-and-a-half for overtime (hours over 40). 
We write a function named `calcpay()` to calculate the pay. The function has no return value and does not use any global variables. The calculated pay should be passed out of the function using call by location i.e. using pointers.

On our local machine, we create a file and name it `Pointers.c` using the following bash command
```bash
touch Pointers.c
```
Inside our `Pointers.c` file, we write the following codes
```C
#include <stdio.h>
main() {
  int empno;
  float rate, hours, pay;
  void calcpay();

  while(1) {
    if ( scanf("%d %f %f",&empno,&rate,&hours) < 3 ) break;
    calcpay(&pay, rate, hours);
    printf("Employee=%d Rate=%.2f Hours=%.2f Pay=%.2f\n",empno, rate, hours, pay);
  } 
}

void calcpay(p,r,h)
    float *p,r,h;
{
  if(h <= 40.0) *p = r *h;
  else *p = r *40.0 + r *(h - 40.0) * 1.5; /*give the employee time-and-a-half for overtime (hours over 40)*/

}
```

In the above code snippet, there are two functions `main()` and `calcpay(p,r,h)`. The `calcpay(p,r,h)` function receives the address of the `pay` variable in the `main()` function, employee rate `r` and employee time `h`; calculates the employee pay saving it in a pointer variable `*p` which points to the `pay` variable in the `main()` function thus, updating the `pay` variable automatically.

To compile our script, we use the following bash command
```bash
gcc -ansi Pointers.c -o Pointers
```
The above command will produce an executable file named `Pointers` in the same directory as our `Pointers.c` file upon successful compilation. 

In order to test the functionality of our C program, we save the test document as `.txt` file.

To achieve this, create a `input.txt` file in the same directory using the following bash command
```bash
touch input.txt
```

In our exercise, we pasted the following lines into our `input.txt` file
```
123 5.00 40
100 4.00 45
199 5.25 10
202 6.15 73
```

In order to test the functionality of our C program, we run the following command
```bash
./Pointers < input.txt
```

The expected result is 
```
Employee=123 Rate=5.00 Hours=40.00 Pay=200.00
Employee=100 Rate=4.00 Hours=45.00 Pay=190.00
Employee=199 Rate=5.25 Hours=10.00 Pay=52.50
Employee=202 Rate=6.15 Hours=73.00 Pay=550.42
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