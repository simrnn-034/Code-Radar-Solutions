// Your code here...
# include <stdio.h>
void odd(int arr[],int N);
int main(){
    int N;  
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    odd(arr,n);
    return 0;
}
void odd(int arr[].int N){
    for(int i=0;i<=N-1;i++){
        if(arr[i]%2==0){
            printf("%d",arr[i]);
        }
        printf("%d",arr[i]);
    }
    return;
}