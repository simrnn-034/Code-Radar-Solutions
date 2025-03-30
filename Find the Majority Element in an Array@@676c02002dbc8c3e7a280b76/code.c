// Your code here...
# include <stdio.h>
int freq(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a;
    a=freq(arr,n);
    printf("%d",a);

}
int freq(int arr[],int n){
    int freq[10000]={0};
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(freq[arr[i]]>(n/2)){
            return arr[i];
        }
        else if(freq[arr[i]]<(n/2)){
            return -1;
        }
        else if(fre[arr[i]]==(n/2)){
            return -1;
        }
    }
}