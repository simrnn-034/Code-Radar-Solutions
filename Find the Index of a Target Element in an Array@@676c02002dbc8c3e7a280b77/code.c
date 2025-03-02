// Your code here...
#include <stdio.h>
void index(int arr[],int N);
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    int T;
    scanf("%d",&T);
    index(arr,N);
    return 0;
}
void index(int arr[],int N){
    for(int i=0;i<=N-1;i++){
        if(T==arr[i]){
            printf("%d",i);
        }
        printf("-1");
    }
    return ;
}
