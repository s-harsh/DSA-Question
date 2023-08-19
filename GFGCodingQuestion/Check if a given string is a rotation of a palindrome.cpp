class Solution{
public:
	 bool ispalin(string str){
	     int i=0,j=str.size()-1;
	     while(i<=j){
	         if(str[i++]!=str[j--]){
	             return false;
	         }
	     }
	     return true;
	 }
	int isRotatedPalindrome(string s)
	{
	    string concat=s+s;
	    int n=concat.size();
	    for(int i=0;i<s.size();i++){
	        string sub=concat.substr(i,s.size());
	        if(ispalin(sub)){
	            return true;
	        }
	    }
	    return false;
	}
};
