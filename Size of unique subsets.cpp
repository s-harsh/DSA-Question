class Solution {
public:
    void solve(string s, unordered_set<string>& subStr, string opt) {
        if (s.size() == 0) {
            subStr.insert(opt);
            return;
        }
        string op1 = opt;
        string op2 = opt + s[0];
        s.erase(s.begin());
        solve(s, subStr, op1);
        solve(s, subStr, op2);
        return;
    }
    int unique_substring(string str) {
        unordered_set<string> subStr;
        string opt = "";
        solve(str, subStr, opt);
        return subStr.size();
    }
};
