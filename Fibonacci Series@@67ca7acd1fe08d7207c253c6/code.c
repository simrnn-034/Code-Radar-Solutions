// Your code here..

int fibonacci(int n){
    if(n==1){
         return 0;
    }
    if(n==2){
        return 1;
    }
    for(int i=0;i<n;i++){
        return fibonacci(n-1)+fibonacci(n-2);
    }
  
}
void fibonacciSeries(int n){
    for(int i=1;i<=n;i++){
        printf("%d ",fibonacci(i));
    }
    
}
