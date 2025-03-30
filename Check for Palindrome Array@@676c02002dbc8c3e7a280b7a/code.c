// Your code here...
# include <stdio.h>
void pali(int arr[],int n)
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    pali(arr,n);
}
void pali(int arr[],int n){
    int paaaali=0;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>0;j++){
            if(arr[i]==arr[j]){
                 paaaali=1;
            }
        }
    }
    if(paaaali){
        printf("YES");
    }
}