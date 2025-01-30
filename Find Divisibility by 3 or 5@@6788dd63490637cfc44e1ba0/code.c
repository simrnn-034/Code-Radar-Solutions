#include <stdio.h>

int main() {
    if(a%5==0 && a%3==0){
        printf("Divisibe by Both");
    }
    else if(a%3==0){
        printf("Divisible by 5");
    }
    else if(a%5==0){
        printf("Divisible by 3");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}