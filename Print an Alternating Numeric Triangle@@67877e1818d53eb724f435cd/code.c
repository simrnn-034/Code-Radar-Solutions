// Your code here...
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Take input for number of rows

    for (int i = 1; i <= N; i++) {  // Loop for rows
        int num = (i % 2 == 1) ? 1 : 0;  // Determine starting number (odd row: 1, even row: 0)
        
        for (int j = 1; j <= i; j++) {  // Loop for columns
            printf("%d ", num);
            num = 1 - num;  // Toggle between 0 and 1
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
