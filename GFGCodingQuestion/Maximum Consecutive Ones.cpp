class Solution {
public:
    int longestOnes(int n, vector<int>& nums, int k) {
        int i = 0, j = 0, ans = 0, cnt0 = 0;
        while (j < n) {
            if(nums[j]==0){
                cnt0++;
            }
            if(cnt0<=k){
                ans=max(ans,j-i+1);
            }
            else if(cnt0>k){
                if(nums[i]==0){
                    cnt0--;
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};
