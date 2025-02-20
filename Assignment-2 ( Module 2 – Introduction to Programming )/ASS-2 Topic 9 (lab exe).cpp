// Assignment - 2 ; Topic - 9 (Lab Exercise)....

#include <stdio.h>

int main() {
    // 1D Array, Storing and Printing 5 Integers
    int arr[5] = {10, 20, 30, 40, 50};
    
    printf("1D Array Elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n\n");  

    // 2D Array, 3x3 Matrix and Sum Calculation
    int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int sum = 0;

    printf("2D Array (3x3 Matrix):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]); 
            sum += matrix[i][j];         
        }
        printf("\n"); 
    }

    printf("\nSum of all elements in the 2D array: %d\n", sum);

    return 0;
}










