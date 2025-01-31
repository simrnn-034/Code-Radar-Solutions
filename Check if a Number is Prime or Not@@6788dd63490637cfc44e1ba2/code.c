#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i=1;i*i<=a;i++){
        if(i%a==0){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
    }
    return 0;
}