// Your code here...
# include<string.h>
void selectionSort(char arr[][100],int n){
    for(int i=0;i<n;i++){
        int min=i;
        char temp[100];
        for(int j=i+1;j<n;j++){
            if(strcmp(arr[min],arr[j])>0){
                min=j;
            }
            
        }
        strcpy(temp,arr[i]);
        strcpy(arr[i],arr[min]);
        strcpy(arr[min],temp);
        
    }
    
}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}