#include <stdio.h>

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary: ");
    
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);  // Extracting each bit using bitwise shift and AND operator
    }

    printf("\n");
    return 0;
}
