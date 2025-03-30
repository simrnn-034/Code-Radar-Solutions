// Your code here...
int binarySearch(int arr[],int n,int target){
    int low=0,high=n-1;
    int mid=(n/2);
    while(low<=high){
        if(target!=arr[i]){
            return -1;
        }
        else if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            high=mid-1;
            return high;
        }
        else if(target>arr[mid]){
            low=mid+1;
            return low;
        }
        
    }    
}