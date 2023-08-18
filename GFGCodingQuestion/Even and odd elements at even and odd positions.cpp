class Solution{
	public:
  // Approach 1
	vector<int> arrangeOddAndEven(int a[], int n) 
	{ 
	    vector<int>ans,even,odd;
	    for(int i=0;i<n;i++){
	        if(a[i]%2==0){
	            even.push_back(a[i]);
	        }
	        else{
	            odd.push_back(a[i]);
	        }
	    }
	    int i = 0, j = 0;
        while (i < even.size() || j < odd.size()) {
            if (i < even.size()) {
                ans.push_back(even[i++]);
            }
            if (j < odd.size()) {
                ans.push_back(odd[j++]);
            }
        }
	    return ans;
	}
};
