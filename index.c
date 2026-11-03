Your code has several issues:

print is not a valid C function — use printf.
Missing spaces in output formatting for readability.
The return 0; should be outside the if-else block for proper program termination.
Minor syntax and formatting improvements.

Here’s the fixed and runnable version:

#include <stdio.h>

int main() {
    int number;

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
