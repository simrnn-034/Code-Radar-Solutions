// Your code here...
void printPrimesInRange(int a,int b){ 
 
    for(int i=a;i<=b;i++){
        if(i==1 || i==0){
            continue;        
        }
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
