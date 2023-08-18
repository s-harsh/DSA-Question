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
