// Your code here...
#include <stdio.h>
void index(int arr[],int N);
int T;
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&T);
    index(arr,N);
    return 0;
}
void index(int arr[],int N){
    int found=0;

    for(int i=0;i<=N-1;i++){
        if(T==arr[i]){
            printf("%d",i);
            found=1;
        }
        
    }
    if(!found){
      printf("-1");
    }
    return ;
}
