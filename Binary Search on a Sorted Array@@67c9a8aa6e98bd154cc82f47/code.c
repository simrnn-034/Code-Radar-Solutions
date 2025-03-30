// Your code here...
int binarySearch(int arr[],int n,int target){
    int low=0,high=n-1;
    
    while(low<=high){
        int mid=(high+low)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(target>arr[mid]){
            low=mid+1;
            
            
        }
        else {
            high=high-1;
            
        }
    return -1;
        
        }
      
        }
        
      
