// naive solution
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        vector<int>ans;
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto it:mp){
            if(it.second==1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};

// Another Approach 
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
         int n=nums.size(),Xor=0;
         for(auto x:nums){
             Xor=Xor^x;
         }
         int lastBit=Xor &~(Xor-1);
         int a=0,b=0;
         for(auto x:nums){
             if(x & lastBit){
                 a=a^x;
             }
             else{
                 b=b^x;
             }
         }
         if(a<b){
             return {a,b};
         }
         return {b,a};
    }
};
