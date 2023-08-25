class Solution{
public:
    void solve(vector<string>&ans,string op,int one,int zero,int n){
        if(n==0){
            ans.push_back(op);
            return ;
        }
        if(n){
            string op1=op+'1';
            solve(ans,op1,one+1,zero,n-1);
        }
        if(one>zero){
            string op2=op+'0';
            solve(ans,op2,one,zero+1,n-1);
        }
        return ;
    }
	vector<string> NBitBinary(int n)
	{
	    vector<string>ans;
	    string op="";
	    int one=0,zero=0;
	    solve(ans,op,one,zero,n);
	    return ans;
	}
};
