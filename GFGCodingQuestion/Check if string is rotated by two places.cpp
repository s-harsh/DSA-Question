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

// Another Approach 
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
        if(str1.size()==1){
            return str1==str2;
        }
        int n=str1.size();
        string left="",right="";
        for(int i=0;i<n;i++){
            left.push_back(str1[(i+2)%n]);
            right.push_back(str1[(n-2+i)%n]);
        }
        return (left==str2) || (right==str2);
    }
};
