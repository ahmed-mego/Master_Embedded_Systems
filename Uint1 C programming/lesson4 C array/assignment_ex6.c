#include <stdio.h>

int main() {
    char str[50];
    char ch;
    int it = 0;

    printf("Enter a string: ");
    gets(str);

    printf("%s\n", str);

    printf("Enter a character to find frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (ch == str[i]) {
            it++;
       }
    }

    printf("the frequency of %c = %d", ch, it);
}