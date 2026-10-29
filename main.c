
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int fib[40] = {1, 1};


int main(void) {
    //chapter 8 Q5
    for (int i = 0; i < 38; i++) {
        fib[i + 2] = fib[i] + fib[i + 1];
    }
    for (int i = 0; i < 40; i++) {
        printf("%d\n", fib[i]);
    }

    return 0;
}

//chapter 10 Q6
//theres no Q6 so I just answered all the questions
//1a - f
//1b - d
//1c - d, e
//1d - f
//2a - global b, c, d
//2b - parameter a, c
//2c - bracket a, c, d
//2d - c, d
//3 - one