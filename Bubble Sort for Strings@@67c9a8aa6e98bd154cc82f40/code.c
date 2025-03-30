// Your code here...
#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[][100], int n) {
    char temp[100]; // Temporary array to swap strings

    for (int i = 0; i < n - 1; ++i) { // Outer loop for passes
        for (int j = 0; j < n - i - 1; ++j) { // Inner loop to compare
            // Compare adjacent strings
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap the strings using strcpy()
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%s\n", arr[i]); // Print sorted strings
    }
}


