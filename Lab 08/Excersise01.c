#include <stdio.h>

int main() {
    // Declare an array of 5 integers and initialize them all to 0
    int Numbers[5] = {};
    int i;  // Declare a loop counter variable

    // Loop to input 5 integer values from the user
    for (i = 0; i < 5; i++) {
        printf("Enter integer value: ");
        scanf("%d", &Numbers[i]);  // Read an integer and store it in the array
    }

    // Loop to print the entered integer values
    for (i = 0; i < 5; i++) {
        printf("%d", Numbers[i]);  // Print the value at the current index of the array
    }

    return 0;  // Return 0 to indicate successful execution
}
