// Your code here...
# include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    rotate(arr,n,k);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void rotate(int arr[],int n,int k){
    int temp;
    for(int i=0;i<(n/2);i++){
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(int i=0;i<(k/2);i++){
        temp=arr[i];
        arr[i]=arr[k-i-1];
        arr[k-i-1]=temp;
    }
    for(int i=k;i<(n-k)/2;i++){
        temp=arr[i];
        arr[i]=arr[n-i+k-1];
        arr[n-i+k-1]=temp;
    }
}