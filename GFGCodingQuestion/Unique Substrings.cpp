class Solution {
public:
    int unique_substring(string str) {
        unordered_set<string> s;
        int n = str.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                s.insert(str.substr(i, j - i));
            }
        }
        return s.size();
    }
};
