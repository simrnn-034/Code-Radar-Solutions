// Your code here...
# include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int j=0;j<i;j++){
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}