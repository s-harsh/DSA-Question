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

// Approach 3
// Get TLE at last test case 🥲
// 230 /231 Passed
// Time Limit Exceeded
class Solution {
public:
    int maxIndexDiff(int arr[], int n) {
        int ans = 0, i = 0, j = n - 1;
        while (i <= j) {
            if (arr[i] <= arr[j]) {
                ans = max(ans, j - i);
                j = n - 1;
                i++;
            } else {
                j--;
            }
        }
        return ans;
    }
};

