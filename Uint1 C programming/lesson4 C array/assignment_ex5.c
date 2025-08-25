#include <stdio.h>

int main() {

    int n, e, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter number %d\n: ", i+1);
        scanf("%d", &arr[i]);
    }

   printf("Enter the element to be serched: ");
   scanf("%d", &e);
   
   for(int i = 0; i < n; i++) {
        if (arr[i] == e) {
            printf("number is found at the location = %d", i+1);
            found = 1;
            break;
        }
   }

   if (!found) {
        printf("number not found\n");
   }

}