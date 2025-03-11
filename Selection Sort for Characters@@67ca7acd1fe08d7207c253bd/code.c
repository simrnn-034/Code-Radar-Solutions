// Your code here...
void selectionSort(int arr[],int n){
    int temp;
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<n;j++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i]=arr[i+1];           
        }
    }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}