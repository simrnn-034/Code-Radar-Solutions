// Your code here...
# include <stdio.h>
void primecheck(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    primecheck(arr,n);

}
void primecheck(int arr[],int n){
    int count_not=0;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=2;j*j<=i;j++){
            if((arr[i])%j==0){
                count_not++;                
            }
            else{
                count++;
            }
        }
    }
    printf("%d",count);
}