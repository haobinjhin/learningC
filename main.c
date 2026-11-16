
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


//Chapter 13
//Exercise 1
//a) no \n needs to be in the first argument and a variable in the second
//b) no same reason as a)
//c) no same reason as a) and b)
//d) no same reason as a), b), and c)
//e) no not in double quotes
//f) yes in double quotes
//g) no not in double quotes
//h) no \n makes it so there are 2 new lines
//i) no single quotes
//j) no same reason as h)
//k) yes puts already makes a new line and the string is in double quotes

//Exercise 4
// A
// int read_line(char str[], int n)
// {
//     int ch, i = 0;
//
//     ch = getchar();
//
//     while (ch == '\n')
//         ch = getchar();
//
//     while (ch != '\n') {
//         if (i < n)
//             str[i++] = ch;
//         ch = getchar();
//     }
//
//     str[i] = '\0';
//     return i;
// }

// B
// int read_line(char str[], int n)
// {
//     int ch, i = 0;
//
//     while ((ch = getchar()) != '\n') {
//         if (i < n)
//             str[i++] = ch;
//     }
//
//     str[i] = '\0';
//     return i;
// }


// C
// int read_line(char str[], int n)
// {
//     int ch, i = 0;
//
//     while ((ch = getchar()) != '\n') {
//         if (i < n)
//             str[i++] = ch;
//     }
//
//     if (i < n)
//         str[i++] = ch;
//
//     str[i] = '\0';
//     return i;
// }

// D
// int read_line(char str[], int n)
// {
//     int ch, i = 0;
//
//     while (i < n && (ch = getchar()) != '\n')
//         str[i++] = ch;
//
//     str[i] = '\0';
//     return i;
// }



int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {

        if (str[left] == ' ') {
            left++;
        }
        else if (str[right] == ' ') {
            right--;
        }
        else {
            char a = str[left];
            char b = str[right];

            // Convert uppercase to lowercase
            if (a >= 'A' && a <= 'Z') {
                a += 32;
            }

            if (b >= 'A' && b <= 'Z') {
                b += 32;
            }

            if (a != b) {
                return 0;
            }

            left++;
            right--;
        }
    }

    return 1;
}

int main() {
    char str[100];

    printf("Enter a word: ");
    scanf("%99s", str);

    if (isPalindrome(str)) {
        printf("It is a palindrome!\n");
    }
    else {
        printf("It is not a palindrome.\n");
    }

    return 0;
}