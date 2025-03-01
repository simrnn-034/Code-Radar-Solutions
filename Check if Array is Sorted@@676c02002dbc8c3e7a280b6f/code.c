// Your code here...
#include <stdio.h>
int sort(int arr[],int N);
int main(){
    int N;
    scanf("%d",&N);
    sort(arr [],N);
    return 0;
}
int sort(int arr[],int N){
    for(int i=1;i<=N;i++){
     if(arr[i]>arr[i+1]){
        printf("Not Sorted");
     }
    printf("Sorted");
    }
    return 0;
}