class Solution
{
public:
    // Function to check if a string can be obtained by rotating
    // another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        if (str1.size() != str2.size()) {
            return false;
        }
        string left = str1;
        string right = str1;
        // Performing left rotation
        rotate(left.begin(), left.begin() + 2, left.end());
        // Performing right rotation
        rotate(right.begin(), right.end() - 2, right.end());
        if (left == str2 || right == str2) {
            return true;
        }
        return false;
    }
};
