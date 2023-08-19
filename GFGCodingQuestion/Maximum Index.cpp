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

// Optimized approach 
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        vector<int> right(n); // max, j
        vector<int> left(n);  // min, i
        left[0] = arr[0];
        right[n - 1] = arr[n - 1];
        for (int i = 1; i < n; i++) {
            left[i] = min(arr[i], left[i - 1]);
        }
        for (int j = n - 2; j >= 0; j--) {
            right[j] = max(arr[j], right[j + 1]);
        }
        int i = 0, j = 0, ans = INT_MIN;
        while (j < n && i < n) {
            if (left[i] <= right[j]) {
                ans = max(ans, j - i);
                j++;
            } else {
                i++;
            }
        }
        return ans;
    }

};

