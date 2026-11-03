#include <stdio.h>
int main() {
    int number;
     // check if a number is even or odd
    printf("Enter any Number: ");
  }  if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1; 
    }

    if (number % 2 == 0) {
        printf("%d is an Even Number!\n", number);
    } else {
        printf("%d is an Odd Number!\n", number);
    }

    return 0; 
