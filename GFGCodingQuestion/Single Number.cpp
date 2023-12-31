class Solution{
public:
	// Brute force approach 
	int getSingle(int arr[], int n) {
	    for(int i=0;i<n;i++){
	        int cnt=0;
	        for(int j=0;j<n;j++){
	            if(arr[i]==arr[j]){
	                cnt++;
	            }
	        }
	        if(cnt%2==1){
	            return arr[i];
	        }
	    }
	    return -1;
	}

	// Approach -2 
	int getSingle(int arr[], int n) {
	    int res=0;
	    for(int i=0;i<n;i++){
	        res^=arr[i];
	    }
	    return res;
	}
};
