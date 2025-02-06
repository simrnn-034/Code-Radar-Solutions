#include <stdio.h>

int main() {
    int a,count,b;
    scanf("%d",&a);
    b=1<<31;
    count=0;
    while((a&b)==0 && count<32){
        a=a<<1;
        count++;
    }
    printf("%d",count);
    return 0;
}