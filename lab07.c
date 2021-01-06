/**
 \file main.c
 \brief Execution of laboratory work 7
 \author Romanenko Dmitry
 \version 1
 \date 25.12.2020
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include < string.h >

/*
* The function that finds the common divisor
*/
int commonDivisor();

/*
* The function of outputting a string to the console using an array
*/
int massive();

/**
*The function of accepting the number of parameters and reversing the numbers of the lower numbers of the
* @param amountOfArgument : number of parameters in which the function is accepted
* @param ...: change the number of int parameters to convert
* @return result: rotate view - forward numbers of smaller ones
*/
int numericalPairCounter(int, ...);

/**
*The main function from which the work begins, run to check the function on the task
*/
int main(void) {
    printf("The number of elements that are less than the next: %d\n", numericalPairCounter(5, 1, 2, 3, 4, 5));
    printf("%c \n",massive());
    printf("Find common divisor: %d ", commonDivisor());
    return 0;
}

int commonDivisor()
{
    int i;
    int div1, div2, div3;
    int a = rand() % 50 + 1;
    int b = rand() % 50 + 1;

    if (b > a) {
        int temp = b;
        b = a;
        a = temp;
    }

    int x = 1;
    int y = 1;

    for (i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0) {
            div1 = i;
        }

    }
    do {
        if (a % x == 0 && b % x == 0) {
            div2 = x;
        }
        x++;
    } while (x < b);

    while (y < b) {
        if (a % y == 0 && b % y == 0) {
            div3 = j;
        }
        y++;
    }
    return div1;
}

int massive() {

    char mass[] = "Ivanov";
    int a = strlen(mass);
    char* res = (char*)malloc((a + 7) * sizeof(char));

    for (int i = 0; i < a + 6; i++)
    {
        if (i <= 2 || i >= 9) {
            res[i] = '_';
            printf("%c", res[i]);
        }
        else {
            res[i] = mass[i - 3];
            printf("%c", res[i]);
        }
    }
    return 0;
}

int numericalPairCounter(int amountOfArgument, ...)
{
    int result = 0;
    va_list args;
    va_start(args, amountOfArgument);

    int* arr = new int[amountOfArgument];
    for (int i = 0; i < amountOfArgument; ++i)
    {
        arr[i] = va_arg(args, int);
    }
    for (int i = 0; i < amountOfArgument - 1; i++) {
        if (arr[i] < arr[i + 1])
            result++;
    }
    va_end(args);

    return result;
}
