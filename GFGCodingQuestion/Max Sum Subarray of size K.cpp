class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n){
        int i=0,j=0;
        long ans=0,sum=0;
        while(j<n){
            sum+=arr[j];
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                ans=max(sum,ans);
                sum-=arr[i];
                i++;j++;
            }
        }
        return ans;
    }
};
