#include <stdio.h>
int main() {
    int a,isPrime=1;
    scanf("%d",&a);
    for(int i=1;i*i<a;i++){
        if(i%a==0){
            isPrime=0;
            break;
        }}
    if(isPrime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    
    return 0;
}