// Your code here...
# include<stdio.h>
void frequency(int arr[],int N);
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    frequency(arr,N);
    return 0;
}
void frequency(int arr[],int N){
    int a= arr[0];
    int count;
    for(int i=1;i<=N-1;i++){
        if(a==arr[i]){
            count++;
            printf("%d",arr[i]);
            printf("%d",count);
        }
    }
    return;

}