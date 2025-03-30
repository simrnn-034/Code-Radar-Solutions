// Your code here...
# include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int K;
    scanf("%d",&K);
    int result;
    rotate(arr[],N,K);
    for(int i=0;i<N;i++){
        printf("%d\n",arr[i]);
    }
}
void rotate(int arr[],int N,int K){
    int temp;
    for(int i=0;i<N;i++){
        if(arr[i]==arr[N-1]){
            arr[N-K]=arr[N-1];
        }
        else if(arr[i-1]==arr[N-2]){
            arr[N-K]=arr[N-2];
        }
    }
    for(int j=0;j<N-K;j++){
       arr[j+K]=arr[j];
    }
    

    }

}

