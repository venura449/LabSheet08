#include <stdio.h>

int main() {
    int numbers[10] = {25, 32, 45, 2, 13, 9, 6, 10, 17, 4};
    int keyVal;

    printf("Enter the search Key: ");
    scanf("%d", &keyVal); // Read the search key from the user

    // Loop through the array to search for the key value
    for (int i = 0; i < 10; i++) {
        if (keyVal == numbers[i]) {
            printf("Key Value Found @ %d index", i); // Print the index where the key value is found
            return -1; // Exit the program with an error code to indicate key value found
        }
    }
    
    // If loop completes without finding the key value
    printf("Value not found");
    return 0; // Return 0 to indicate successful execution
}
