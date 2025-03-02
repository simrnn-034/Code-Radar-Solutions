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
    odd(arr,N);
    return 0;
}
void odd(int arr[],int N){
    int count_even =0;
    int count_odd=0;
    for(int i=0;i<=N-1;i++){
        if(arr[i]%2==0){
            count_even++;
        }
        else if(arr[i]%2!=0){
            count_odd++;
            
        }
        
    }
    printf("%d",count_odd);
    printf("%d",count_even);
    return;
}