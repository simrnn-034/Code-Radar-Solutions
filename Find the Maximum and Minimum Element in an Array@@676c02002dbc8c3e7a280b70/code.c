// Your code here...
# include <stdio.h>
void element(int arr[],int N);

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    element(arr,N);
    return 0;
}

void element(int arr[],int N){
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<=N-1;i++){
        if(arr[i]<min){
            min=arr[i];
           
        }
        if(arr[i]>max){
            max=arr[i];
            
        }

    }
     printf("%d ",min);
     printf("%d",max);
    return;
}