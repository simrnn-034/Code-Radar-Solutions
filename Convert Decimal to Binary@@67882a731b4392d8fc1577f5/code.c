#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=31;i>=0;i--){
        if(n>>i & 1){
            printf("1");
        }
        else if(i<31 && (n>>(i+1))){
            printf("0");
        }
        else if(n==0){
            printf("0");
        }
    }
    return 0;
}
