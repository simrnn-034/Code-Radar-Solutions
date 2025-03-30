# include <stdio.h>
void rotate(int arr[],int N,int K);
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[N]);
    }
    int K;
    scanf("%d",&K);
    rotate(arr,N,K);
}
void rotate(int arr[],int N,int K){
    int temp;
    for(int i=0;i<N/2;i++){
        temp=arr[i];
        arr[i]=arr[N-i-1];
        arr[N-i-1]=temp;        
    }
    for(int i=0;i<K/2;i++){
        temp=arr[i];
        arr[i]=arr[K-i-1];
        arr[K-i-1]=temp;
    }
    for(int i=0;i<(N+K)/2;i++){
        temp=arr[i];
        arr[i]=arr[N-i+K-1];
        arr[N-i+K-1]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}


