// Your code here...
# include <stdio.h>
void pali(int arr[],int n);
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
    int paaaali=1;
    for(int i=0;i<(n/2);i++){
        if(arr[i]!=arr[n-i-1]){
            paaaali=0
        }
    }
    }
    if(paaaali){
        printf("YES");
    }
    else{
        printf("NO");
    }
