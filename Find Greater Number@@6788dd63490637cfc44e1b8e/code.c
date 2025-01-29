#include <stdio.h>

int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b){
        printf("%d",a);
    }
    else if(a<b){
        printf("%d",b);
    }
    else{
        printf("Invalid");
    }
    return 0;
}