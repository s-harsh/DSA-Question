// brute force approach
class Solution{
    public:
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]<=arr[j] && ans<(j-i)){
                    ans=j-i;
                }
            }
        }
        return ans;
    }
};

// Little more optimize 
// just make i is less then from j
class Solution{
    public:
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
        int ans=0;
        for(int j=0;j<n;j++){
            for(int i=0;i<j;i++){
                if(arr[i]<=arr[j] && ans<(j-i)){
                    ans=j-i;
                }
            }
        }
        return ans;
    }
};
