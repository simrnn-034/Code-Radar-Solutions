#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    a=a>>31;
    if(a&1==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}