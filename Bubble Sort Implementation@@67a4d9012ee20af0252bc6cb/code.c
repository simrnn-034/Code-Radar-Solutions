// Your code here...
void bubbleSort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
}