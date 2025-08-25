#include <stdio.h>

int main() {
    char str[50];
    int i = 0;

    printf("Enter a string: ");
    gets(str);


   while(str[i] != '\0') {
    i++;
   }

   for(int j = i-1; j >= 0; j--) {
        printf("%c", str[j]);
   }
   return 0;
}