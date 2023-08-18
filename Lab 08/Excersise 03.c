#include <stdio.h>

// Function prototype to input rainfall data
void assignRain(float data[]);

// Function prototype to find the month with the maximum rainfall
int maxMonth(float data[]);

// Function prototype to find the month with the minimum rainfall
int minMonth(float data[]);

int main() {
    float data[12] = {};

    // Input monthly average rainfall data
    assignRain(data);
    printf("\n");

    // Find and display the month with maximum and minimum rainfall
    printf("Maximum rain fall is %d month\n", maxMonth(data) + 1);
    printf("Minimum rainfall month is %d month\n", minMonth(data) + 1);

    return 0;
}

// Function definition to input rainfall data
void assignRain(float data[]) {
    int i;
    for (i = 0; i < 12; i++) {
        printf("Enter the Rainfall of %d month : ", (i + 1));
        scanf("%f", &data[i]);
    }
}

// Function definition to find the month with the maximum rainfall
int maxMonth(float data[]) {
    int max = 0; // Initialize max with the first value in the array
    int i;
    for (i = 1; i < 12; i++) {
        if (data[max] < data[i]) {
            max = i; // Update max if a larger value is found
        }
    }
    return max; // Return the index of the month with maximum rainfall
}

// Function definition to find the month with the minimum rainfall
int minMonth(float data[]) {
    int min = 0; // Initialize min with the first value in the array
    int i;
    for (i = 1; i < 12; i++) {
        if (data[min] > data[i]) {
            min = i; // Update min if a smaller value is found
        }
    }
    return min; // Return the index of the month with minimum rainfall
}
