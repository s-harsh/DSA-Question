class Solution {
public:
    void solve(string s, vector<string>& output, string opt) {
        if (s.size() == 0) {
            output.push_back(opt);
            return;
        }
        string op1 = opt + " " + s[0];
        string op2 = opt + s[0];
        s.erase(s.begin());
        solve(s, output, op1);
        solve(s, output, op2);
    }
    vector<string> permutation(string s) {
        vector<string> output;
        string opt = "";
        opt.push_back(s[0]);
        s.erase(s.begin());
        solve(s, output, opt);
        return output;
    }
};
