// Your code here...
void selectionSort(int arr[],int n);

void selectionSort(int arr[],int n){
    int temp;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-i-1;j++){
        if(arr[i]>arr[i+1]){
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }

}
