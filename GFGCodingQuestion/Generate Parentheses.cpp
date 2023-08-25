class Solution {
public:
    void solve(vector<string>& ans, string op, int open, int close) {
        if (open == 0 && close == 0) {
            ans.push_back(op);
            return;
        }
        
        if (open > 0) {
            string op1 = op + '(';
            solve(ans, op1, open - 1, close);
        }
        
        if (close > 0 && close > open) {
            string op2 = op + ')';
            solve(ans, op2, open, close - 1);
        }
    }
    
    vector<string> AllParenthesis(int n) {
        vector<string> ans;
        int open = n, close = n;
        string op = "";
        solve(ans, op, open, close);
        return ans;
    }
};
