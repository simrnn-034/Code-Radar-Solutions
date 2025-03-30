// Your code here...
void printPrimesInRange(int a,int b){ 
    if(a==1){
        continue;
    }    
    for(int i=a;i<=b;i++){
         int isPrime=1; 
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isPrime=0;
                break;
            }
            }
            if(isPrime){
                printf("%d ",i);
            }
        }
    }
