// Your code here...
void printPrimesInRange(int a,int b){  
    int isPrime=1;  
    for(int i=a;i<=b;i++){
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isPrime=0;
            }
            }
            if(isPrime){
                printf("%d ",i);
            }
        }
    }
