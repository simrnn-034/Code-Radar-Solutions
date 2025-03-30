// Your code here...
int binarySearch(int arr[],int n,int target){
    int low=0,high=n-1;
    int mid=low+(high-low)/2;
    while(low<=high){
        if(arr[mid]==target){
            return mid;
        }
        else if(target>arr[mid]){
            low=mid+1;
            return low;
            
        }
        else {
            high=high-1;
            return high;
        }
    return -1;
        
        }
      
        }
        
      
