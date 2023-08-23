class Solution{
public:	
	string printString(string &s, char ch, int count)
	{
	    if(count==0){
	        return s;
	    }
	    int cnt=0,i=0;
	    string ans="";
	    for(i=0;i<s.size()-1;i++){
	        if(s[i]==ch){
	            cnt++;
	        }
	        if(cnt>=count){
	            ans+=s[i+1];
	        }
	    }
	    if(ans.size()==0){
	            return "Empty string";
	   }
	   return ans;
	}
};
