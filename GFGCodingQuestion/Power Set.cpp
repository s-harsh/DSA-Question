class Solution{
	public:
	    void solve(string s,vector<string>&ans,string output){
	        if(s.size()==0){
	            ans.push_back(output);
	            return ;
	        }
	        string op1=output;
	        string op2=output;
	        op2.push_back(s[0]);
	        s.erase(s.begin());
	        solve(s,ans,op1);
	        solve(s,ans,op2);
	    }
		vector<string> AllPossibleStrings(string s){
		    vector<string>ans;
		    string output="";
		    solve(s,ans,output);
		    sort(ans.begin(),ans.end());
		    ans.erase(ans.begin());
		    return ans;
		}
};
