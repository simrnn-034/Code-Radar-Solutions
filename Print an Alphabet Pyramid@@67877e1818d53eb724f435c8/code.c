// Your code here...
#include <stdio.h>

int main() {
    int a,i,j,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(k=0;k<i;k++){
            printf("%c ",'A'+k);
        }
        printf("\n");
        }

       return 0; 
    }
    