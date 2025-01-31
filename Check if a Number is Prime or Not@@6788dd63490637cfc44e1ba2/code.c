#include <stdio.h>
int main() {
    int a,i,isPrime=1;
    scanf("%d",&a);
    if(i>1){
    for(i=2;i*i<=a;i++){
        if(a%i==0){
            isPrime=0;
            break;
        }}}
    if(isPrime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    
    return 0;
}