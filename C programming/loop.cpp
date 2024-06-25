#include <stdio.h>

int main() {
    // Array of integers
    int input[] = {10, 20, 30, 40, 50};
    int output[5]; // Array to store results
    int multiplier = 2; // Variable for calculation
    
    // Iterate through the input array using a for loop
    for (int i = 0; i < sizeof(input) / sizeof(input[0]); i++) {
        output[i] = input[i] * multiplier; // Perform calculation and store result
    }
    
    // Print the original and modified arrays
    printf("Original array:\n");
    for (int i = 0; i < sizeof(input) / sizeof(input[0]); i++) {
        printf("%d ", input[i]);
    }
    printf("\n");
    
    printf("Modified array (each element multiplied by %d):\n", multiplier);
    for (int i = 0; i < sizeof(output) / sizeof(output[0]); i++) {
        printf("%d ", output[i]);
    }
    printf("\n");
    
    return 0;
}
