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

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar(); // Clear the newline character from the buffer

    char arr[n][100]; // Array to hold strings

    printf("Enter the strings:\n");
    for (int i = 0; i < n; ++i) {
        fgets(arr[i], sizeof(arr[i]), stdin);
        arr[i][strcspn(arr[i], "\n")] = '\0'; // Remove trailing newline
    }

    // Sort the strings and print them
    bubbleSort(arr, n);
    printf("\nSorted Strings:\n");
    printArray(arr, n);

    return 0;
}
