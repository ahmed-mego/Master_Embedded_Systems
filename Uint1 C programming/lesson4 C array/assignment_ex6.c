// Program: Character Frequency
// Description: Reads a string and a character, then counts its frequency.

#include <stdio.h>

int main() {
    char str[50], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ch) count++;

    printf("The frequency of %c = %d\n", ch, count);
}
