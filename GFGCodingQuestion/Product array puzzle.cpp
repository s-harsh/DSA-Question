class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        vector<long long>ans;
        long long p=1;
        long long zeroCount=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zeroCount++;
                continue;
            }
            p*=nums[i];
        }
        for(int i=0;i<n;i++){
            if(zeroCount>1){
                ans.push_back(0);
            }
            else if(zeroCount==1){
                ans.push_back(nums[i]==0?p:0);
            }
            else{
                ans.push_back(p/nums[i]);
            }
        }
        return ans;
    }
};
