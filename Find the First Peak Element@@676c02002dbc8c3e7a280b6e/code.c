// Your code here...
# include<stdio.h>
void peak(int arr[],int N);
int main(){
    int N;
    int arr[N];
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        scanf("%d",&arr[i]);
    }
    peak(arr,N);
    return 0;
    }


void peak(int arr[],int N){
    for(int i=0;i<=N-1;i++)
        if((arr[i-1]<arr[i]) &&(arr[i]>arr[i+1])){
            printf("%d",arr[i]);
            break;
                   }

        else if(arr[N-1]>arr[N-2]){
            printf("%d",arr[N-1]);
            
        }
        
        else if(arr[0]>arr[1]){
            printf("%d",arr[0]);  
                   
        }
        
        }

        
    
