// Your code here...
#include <stdio.h>

int main() {
    int n, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;  // Increment number for next position
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
