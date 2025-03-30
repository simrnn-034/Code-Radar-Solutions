// Your code here...
void bubbleSort(char arr[][100],int n){
    char temp;
    for(int i=0;i<n;++i){
        for(int j=0;j<n-i-1;++j){
            if(strcmp((arr[i],arr[i+1])>0)){
                strcpy(temp,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],temp);
            }
        }
    }
}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i][]);
    }
}