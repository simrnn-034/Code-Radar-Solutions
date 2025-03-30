// Your code here...
void bubbleSort(int arr[],int n){
    int temp;
    for(int i=0;i<n;++i){
        for(int j=0;j<n-i-1;++j){
            if(strcmp((arr[i],arr[i+1])>0)){
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[i+1]);
                strcpy(arr[i+1],temp);
            }
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}