#include <stdio.h>

void primecheck(int arr[], int n);

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for prime numbers
    primecheck(arr, n);

    return 0;
}

// Function to count prime numbers in the array
void primecheck(int arr[], int n) {
    int count = 0; // Count of prime numbers

    for (int i = 0; i < n; i++) {
        int num = arr[i];  // Get the current number
        int isPrime = 1;   // Assume prime initially

        // Handle numbers less than or equal to 1
        if (num <= 1) {
            isPrime = 0; // 0 and 1 are not prime
        } 
        // Check divisibility only for numbers greater than 1
        else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = 0; // Not prime if divisible
                    break;
                }
            }
        }

        // Increment count if the number is prime
        if (isPrime) {
            count++;
        }
    }

    // Print the total number of prime numbers
    printf("%d\n", count);
}
