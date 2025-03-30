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
        int num=arr[i];
        int isPrime=1;
        if(num<=1){
            isPrime=0;
        }
        for(int j=2;j*j<=i;j++){
            if((arr[i])%j==0){
                isPrime=0;                
            }
            
        }
        if(isPrime){
            count++;
        }
    }
    printf("%d",count);
}