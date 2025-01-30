#include <stdio.h>

int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c):
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
          if(a>=b){
            printf("%d",a/b);
            }
          else{
            printf("Invalid");
          }  
            break; 
        default:
            printf("Invalid");
            break;    
             

    return 0;
}