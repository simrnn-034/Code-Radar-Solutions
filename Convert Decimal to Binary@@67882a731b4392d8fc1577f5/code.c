#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);  
    }
    return 0;
}
