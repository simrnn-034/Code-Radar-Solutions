#include <stdio.h>

void peak(int arr[], int N);

int main() {
    int N;
    scanf("%d", &N);

    if (N <= 0) return 0; // Edge case: No valid input

    int arr[N];  // Corrected array declaration

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    peak(arr, N);
    return 0;
}

void peak(int arr[], int N) {
    // Handle single-element case
    if (N == 1) {
        printf("%d\n", arr[0]);
        return;
    }

    // Check if the first element is a peak
    if (arr[0] > arr[1]) {
        printf("%d\n", arr[0]);
        return;
    }

    // Check for peak elements in the middle
    for (int i = 1; i < N - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d\n", arr[i]);
            return;  // Stop at the first peak
        }
    }

    // Check if the last element is a peak
    if (arr[N - 1] > arr[N - 2]) {
        printf("%d\n", arr[N - 1]);
        return;
    }

    // No peak found
    printf("-1\n");
}


        
    
