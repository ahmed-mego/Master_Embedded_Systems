/*
 * Program: Find the length of a string without using strlen()
 * Author : Ahmed
 * 
 * This program takes a string input from the user
 * and calculates its length manually by counting
 * the characters until the null terminator '\0'.
 */

#include <stdio.h>

int main() {

    char str[50];
    int i = 0;

    printf("Enter a string: ");
    gets(str);   // ⚠️ deprecated, consider using fgets instead

    while(str[i] != '\0') {
        i++;
    }

    printf("length of string: %d", i);
}
