// Your code here...
#include <stdio.h>
int sort(int arr[],int N);
int main(){
    int N;
    int arr[];
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&arr[i]);
    }
    if(sort(arr,N)){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    sort(arr,N);
    return 0;
}
int sort(int arr[],int N){
    for(int i=1;i<=N-1;i++){
     if(arr[i]>arr[i+1]){
        return 0;
     }
    return 1;
    }
    }