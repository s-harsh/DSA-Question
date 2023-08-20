// O(n) space complixity approach 
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        int i=0,j=0,n=s.size(),ans=0;
        unordered_map<char,int>mp;
        while(j<n){
            mp[s[j]]++;
            while(mp.size()<(j-i+1)){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
            }
            if(mp.size()==(j-i+1)){
                ans=max(ans,(j-i+1));
            }
            j++;
        }
        return ans;
    }
};

// o(1) space complixity Approach 
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        int i=0,j=0,n=s.size(),ans=0;
        int mp[26]={0};
        while(j<n){
            mp[s[j]-'a']++;
            while(mp[s[j]-'a']>1){
                mp[s[i]-'a']--;
                i++;
            }
            ans=max(ans,(j-i+1));
            j++;
        }
        return ans;
    }
};
