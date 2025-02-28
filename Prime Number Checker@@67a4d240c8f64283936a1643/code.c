// Your code here...
# include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}
void isPrime(num){
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
        return 0;
        }
        else{
            return 1;
        }
    }
}