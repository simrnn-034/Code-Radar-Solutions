// Your code here...
# include <stdio.h>
# include <strlib.h>
void second(int arr[],int N);
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",abs(&arr[i]));
    }
    second(arr,N);
}
void second(int arr[],int N){
    int largest=arr[0];
    int second= -1;
    for(int i=0;i<N;i++){
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];            
        }
        else if(arr[i]>second && arr[i]!=largest){
            second=arr[i];
        }
       
    }
    printf("%d",second);
}