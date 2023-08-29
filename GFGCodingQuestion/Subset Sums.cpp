class Solution
{
public:
    void solve(vector<int>arr,vector<int>&ans,int sum){
        if(arr.size()==0){
            ans.push_back(sum);
            sum=0;
            return ;
        }
        int a=sum;
        int b=sum+arr[0];
        arr.erase(arr.begin());
        solve(arr,ans,a);
        solve(arr,ans,b);
        return ;
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ans;
        int sum=0;
        solve(arr,ans,sum);
        return ans;
    }
};
