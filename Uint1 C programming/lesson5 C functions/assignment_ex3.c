#include <stdio.h>
#include <string.h>

void reverseWord(char word[], int size);

int main() 
{
    char str[50];

    printf("Enter a sentence: ");
    gets(str);
    reverseWord(str,strlen(str) - 1);

    
}

void reverseWord(char word[], int size)
{

   if(size < 0)
   {
    return;
   }

   printf("%c", word[size]);

   reverseWord(word, size - 1);
}

