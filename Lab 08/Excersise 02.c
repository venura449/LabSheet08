#include <stdio.h>
#include <assert.h>

// Function prototype for searching a key value in an array
int searchKey(int keyVal, int Numbers[]);

// Function to check the searchKey function with assertions
void check(int numbers[]);

int main() {
    int Numbers[10] = {25, 32, 45, 2, 13, 9, 6, 10, 17, 4};
    int index;
    int keyVal;

    // Check the searchKey function with assertions
    check(Numbers);

    printf("Enter the Search key value for search: ");
    scanf("%d", &keyVal);
    index = searchKey(keyVal, Numbers);

    if (index != -1) {
        printf("\nThe Key %d is found at position: %d\n", keyVal, index);
    } else {
        printf("The key is not found\n");
    }

    return 0;
}

// Function to search for a key value in an array
int searchKey(int keyVal, int numbers[]) {
    for (int i = 0; i < 10; i++) {
        if (keyVal == numbers[i]) {
            return i;
        }
    }
    return -1;
}

// Function to check the correctness of the searchKey function using assertions
void check(int numbers[]) {
    // Check if the searchKey function works as expected
    assert(searchKey(45, numbers) == 2); // Assuming the value 45 is at index 2
    assert(searchKey(10, numbers) == 7); // Assuming the value 10 is at index 7
}
