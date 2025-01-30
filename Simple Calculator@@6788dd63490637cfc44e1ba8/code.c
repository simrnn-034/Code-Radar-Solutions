#include <stdio.h>

int main() {
    int a,b;
    char c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&c);
    switch(c){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%d",a/b);
            break; 
        default:
            printf("Invalid");
            break;    
             
    }
    return 0;
}