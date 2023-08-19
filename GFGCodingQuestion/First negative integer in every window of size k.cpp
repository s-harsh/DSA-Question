// Brute force approach 
vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int n, long long int k) {
        long long i=0,j=0;
        vector<long long>ans;
        while(j<n){
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                for(int x=i;x<=j;x++){
                    if(a[x]<0){
                        ans.push_back(a[x]);
                        break;
                    }
                    else if(x==j && a[x]>0 ){
                        ans.push_back(0);
                    }
                }
                i++,j++;
            }
        }
        return ans;
                                                 
 }
