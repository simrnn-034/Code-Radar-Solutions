// Your code here...
# include<stdio.h>
int peak(int arr[],int N);
int main(){
    int N;
    int arr[N];
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",peak(arr,N));
    return 0;
    }


int peak(int arr[],int N){
    for(int i=1;i<=N-1;i++){
        if((arr[i-1]<arr[i]) &&(arr[i]>arr[i+1])){
            printf("%d",i);
            break;
        }
        
    }
}