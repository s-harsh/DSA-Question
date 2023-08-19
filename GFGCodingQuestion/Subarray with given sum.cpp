class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        if(s==0){
            return {-1};
        }
        int sum=0,i=0,j=0;
        while(i<=n && j<n){
            if(sum<s){
                sum+=arr[i++];
            }
            else if(sum>s){
                sum-=arr[j++];
            }
            else if(sum==s){
                return {j+1,i};
            }
        }
        return {-1};
    }
};
