// Your code here..

int fibonacciSeries(int n){
    if(n==1){
         printf("0");
    }
    if(n==2){
        printf("1");
    }
    for(int i=0;i<n;i++){
        printf("%d", fibonacciSeries(n-1)+fibonacciSeries(n-2));
    }
    return 0;
  }
