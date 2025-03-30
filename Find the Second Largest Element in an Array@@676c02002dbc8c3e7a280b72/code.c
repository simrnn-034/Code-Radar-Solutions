// Your code here...
# include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",arr[i]);
    }

}
void second(int arr[],int N;i++){
    int largest=arr[0];
    int second;
    for(int i=0;i<N;i++){
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];
            
        }
    }
}